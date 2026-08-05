CREATE DATABASE BankDB
GO
USE BankDB
GO
CREATE TABLE BankAccounts
(
    AccountID INT PRIMARY KEY,
    CustomerName NVARCHAR(100),
    Balance DECIMAL(12,2),
    AccountType NVARCHAR(20),
    IsFrozen BIT
);
INSERT INTO BankAccounts
VALUES
(1,'Ahmed',15000,'Savings',0),
(2,'Sara',800,'Savings',0),
(3,'Mona',-250,'Checking',0),
(4,'Ali',4200,'Checking',0),
(5,'Omar',30000,'Business',0),
(6,'Nada',500,'Business',1),
(7,'Yousef',0,'Savings',0),
(8,'Hassan',1200,'Checking',1),
(9,'Mariam',75000,'Business',0);


SELECT * FROM BankAccounts