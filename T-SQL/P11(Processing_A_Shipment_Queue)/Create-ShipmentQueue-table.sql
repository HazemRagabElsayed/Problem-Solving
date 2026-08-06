CREATE TABLE ShipmentQueue
(
    ShipmentID      INT PRIMARY KEY,
    CustomerID      INT,
    OrderID         INT,
    Status          VARCHAR(20),
    CreatedAt       DATETIME,
    ProcessedAt     DATETIME NULL
);

INSERT INTO ShipmentQueue
VALUES
(1,101,5001,'Pending','2026-08-01 09:00',NULL),
(2,102,5002,'Pending','2026-08-01 09:05',NULL),
(3,103,5003,'Pending','2026-08-01 09:10',NULL),
(4,104,5004,'Pending','2026-08-01 09:15',NULL),
(5,105,5005,'Pending','2026-08-01 09:20',NULL);