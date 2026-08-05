USE Inventory_DB
CREATE TABLE Products
(
    ProductID INT PRIMARY KEY,
    ProductName NVARCHAR(100),
    UnitsInStock INT,
    ReorderLevel INT,
    Discontinued BIT
);
INSERT INTO Products
VALUES
(1,'Laptop',25,10,0),
(2,'Mouse',8,10,0),
(3,'Keyboard',0,15,0),
(4,'Monitor',50,20,0),
(5,'Printer',5,5,0),
(6,'Scanner',12,15,0),
(7,'Webcam',0,10,1),
(8,'Speaker',40,20,1);