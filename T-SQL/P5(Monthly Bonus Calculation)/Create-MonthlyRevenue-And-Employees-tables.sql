-- Create Database
CREATE DATABASE BonusCalculationDB;

-- Use Database
USE BonusCalculationDB;


-- Create MonthlyRevenue Table
CREATE TABLE MonthlyRevenue
(
    Month VARCHAR(20) PRIMARY KEY,
    Revenue DECIMAL(12,2)
);


-- Create Employees Table
CREATE TABLE Employees
(
    EmployeeID INT PRIMARY KEY,
    Salary DECIMAL(12,2),
    BonusEligible BIT
);


-- Insert Data into MonthlyRevenue
INSERT INTO MonthlyRevenue (Month, Revenue)
VALUES
('January', 120000),
('February', 80000),
('March', 150000);


-- Insert Data into Employees
INSERT INTO Employees (EmployeeID, Salary, BonusEligible)
VALUES
(1, 5000, 1),
(2, 6000, 1),
(3, 4500, 0),
(4, 7000, 1);