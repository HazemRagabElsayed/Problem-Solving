CREATE DATABASE CompanyDB;

USE CompanyDB;

-- Create Employees Table
CREATE TABLE Employees
(
    EmployeeID INT PRIMARY KEY,
    Salary DECIMAL(10,2) NOT NULL,
    DepartmentID INT NOT NULL
);

-- Insert Sample Data
INSERT INTO Employees (EmployeeID, Salary, DepartmentID)
VALUES
(1, 5000.00, 101),
(2, 7000.00, 102),
(3, 9000.00, 103),
(4, 12000.00, 101),
(5, 15000.00, 104),
(6, 8000.00, 102),
(7, 10000.00, 105),
(8, 6000.00, 103),
(9, 20000.00, 101),
(10, 11000.00, 104);
