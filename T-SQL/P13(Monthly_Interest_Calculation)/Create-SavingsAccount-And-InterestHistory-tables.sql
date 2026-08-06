CREATE TABLE SavingsAccount
(
    AccountID INT PRIMARY KEY,
    CustomerName VARCHAR(100),
    Balance DECIMAL(18,2),
    AnnualInterestRate DECIMAL(5,2)
);

CREATE TABLE InterestHistory
(
    HistoryID INT IDENTITY PRIMARY KEY,
    AccountID INT,
    MonthNumber INT,
    OpeningBalance DECIMAL(18,2),
    InterestEarned DECIMAL(18,2),
    ClosingBalance DECIMAL(18,2),
    CalculatedAt DATETIME
);
INSERT INTO SavingsAccount
VALUES
(1,'John Smith',10000.00,6.00),
(2,'Mary Johnson',25000.00,4.50),
(3,'David Brown',5000.00,8.00);