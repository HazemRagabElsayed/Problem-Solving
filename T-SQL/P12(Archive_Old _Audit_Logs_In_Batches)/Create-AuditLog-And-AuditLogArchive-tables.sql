CREATE TABLE AuditLog
(
    AuditID     INT IDENTITY PRIMARY KEY,
    UserID      INT NOT NULL,
    ActionName  VARCHAR(100),
    ActionDate  DATETIME,
    Details     VARCHAR(500)
);

CREATE TABLE AuditLogArchive
(
    AuditID     INT PRIMARY KEY,
    UserID      INT,
    ActionName  VARCHAR(100),
    ActionDate  DATETIME,
    Details     VARCHAR(500)
);

TRUNCATE TABLE AuditLog;
TRUNCATE TABLE AuditLogArchive;

DECLARE @i INT = 1;

WHILE @i <= 3000
BEGIN
    INSERT INTO AuditLog
    (
        UserID,
        ActionName,
        ActionDate,
        Details
    )
    VALUES
    (
        @i % 100 + 1,

        'Login',

        CASE
            WHEN @i <= 2000
                THEN DATEADD(YEAR, -3, GETDATE())   -- Old records (should be archived)
            ELSE
                DATEADD(MONTH, -6, GETDATE())       -- Recent records (should remain)
        END,

        'Audit Record ' + CAST(@i AS VARCHAR(10))
    );

    SET @i += 1;
END

