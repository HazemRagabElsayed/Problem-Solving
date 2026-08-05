CREATE DATABASE HR_DB
GO
USE HR_DB
GO

CREATE TABLE Employees
(
    EmployeeID INT PRIMARY KEY,
    EmployeeName NVARCHAR(100),
    Department NVARCHAR(50),
    Salary DECIMAL(10,2)
);
INSERT INTO Employees
VALUES
(1,'Ahmed','IT',12000),
(2,'Sara','HR',6500),
(3,'Mona','Sales',9500),
(4,'Ali','IT',7800),
(5,'Omar','Finance',15000),
(6,'Nada','Sales',5200),
(7,'Yousef','HR',10500),
(8,'Hassan','Finance',8900);