
create database InventoryDB
go
use InventoryDB
go

-- Create Products Table
CREATE TABLE Products
(
    ProductID INT PRIMARY KEY,
    ProductName VARCHAR(100) NOT NULL,
    StockQuantity INT NOT NULL,
    IsDiscontinued BIT NOT NULL
);

-- Insert Sample Data
INSERT INTO Products (ProductID, ProductName, StockQuantity, IsDiscontinued)
VALUES
(1, 'Laptop', 20, 0),
(2, 'Wireless Mouse', 50, 0),
(3, 'Keyboard', 35, 0),
(4, 'Monitor', 15, 0),
(5, 'USB Flash Drive', 100, 0),
(6, 'Printer', 10, 1),
(7, 'Webcam', 25, 0),
(8, 'External Hard Drive', 12, 0),
(9, 'Headphones', 40, 1),
(10, 'Graphics Card', 8, 0);