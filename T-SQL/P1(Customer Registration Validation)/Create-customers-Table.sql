CREATE DATABASE EcommerceDB;
GO

USE EcommerceDB;
GO
-- Create Customers Table
CREATE TABLE Customers
(
    CustomerID INT IDENTITY(1,1) PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Email VARCHAR(100),
    Phone VARCHAR(20), 
    CreatedDate DATETIME DEFAULT GETDATE()
);

-- Insert Sample Data
INSERT INTO Customers (FirstName, LastName, Email, Phone)
VALUES
('John', 'Doe', 'john@gmail.com', '1234567890'),
('Sarah', 'Ali', 'sarah@gmail.com', '1112223333'),
('Ahmed', 'Hassan', 'ahmed@gmail.com', '2223334444'),
('Emily', 'Smith', 'emily@gmail.com', '3334445555'),
('Michael', 'Brown', 'michael@gmail.com', '4445556666');