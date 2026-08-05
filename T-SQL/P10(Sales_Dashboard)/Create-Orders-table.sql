CREATE DATABASE EcommerceDB
GO
USE EcommerceDB
CREATE TABLE Orders
(
    OrderID INT PRIMARY KEY,
    CustomerName NVARCHAR(100),
    Country NVARCHAR(50),
    OrderStatus NVARCHAR(20),
    TotalAmount DECIMAL(10,2)
);
INSERT INTO Orders
VALUES
(1,'Ahmed','Egypt','Completed',1500),
(2,'Sara','Egypt','Pending',800),
(3,'Ali','Saudi Arabia','Completed',3200),
(4,'Mona','Egypt','Cancelled',450),
(5,'Omar','UAE','Completed',5000),
(6,'Nada','Saudi Arabia','Completed',2800),
(7,'Yousef','UAE','Pending',700),
(8,'Hassan','Egypt','Completed',1100),
(9,'Mariam','Saudi Arabia','Cancelled',600),
(10,'Mahmoud','UAE','Completed',4200);
