-- Create Database
CREATE DATABASE ETL_Project;
GO

-- Use Database
USE ETL_Project;
GO

-- Create ETL_RunHistory Table
CREATE TABLE ETL_RunHistory
(
    RunID INT IDENTITY(1,1) PRIMARY KEY,
    RunDate DATE NOT NULL,
    Status VARCHAR(20) NOT NULL,
    StartedAt DATETIME NULL,
    CompletedAt DATETIME NULL
);
GO

-- Insert Sample Data
INSERT INTO ETL_RunHistory
(
    RunDate,
    Status,
    StartedAt,
    CompletedAt
)
VALUES
(
    '2026-08-01',
    'Completed',
    '2026-08-01 01:00:00',
    '2026-08-01 01:15:00'
),
(
    '2026-08-02',
    'Failed',
    '2026-08-02 01:00:00',
    NULL
),
(
    '2026-07-31',
    'Completed',
    '2026-07-31 01:00:00',
    '2026-07-31 01:10:00'
);
GO

-- View Inserted Data
SELECT * 
FROM ETL_RunHistory;
GO