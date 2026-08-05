USE ecommerceDB
GO

CREATE TABLE Orders
(
    OrderID INT PRIMARY KEY,
    CustomerName NVARCHAR(100),
    TotalAmount DECIMAL(10,2)
);

INSERT INTO Orders
VALUES
(1,'Ahmed',45),
(2,'Sara',120),
(3,'Mohamed',260),
(4,'Mona',510),
(5,'Ali',1000),
(6,'Omar',75),
(7,'Yousef',330),
(8,'Nada',90);