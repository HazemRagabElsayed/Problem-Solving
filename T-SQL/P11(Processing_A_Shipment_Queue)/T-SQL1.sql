USE EcommerceDB;

DECLARE @ShipmentID INT,
@CreatedAt DATETIME2;

SELECT TOP 1 @CreatedAt = CreatedAt, @ShipmentID = ShipmentID FROM ShipmentQueue WHERE Status = 'Pending' ORDER BY CreatedAt , ShipmentID; 

WHILE @ShipmentID IS NOT NULL 
BEGIN
	UPDATE ShipmentQueue 
	SET Status = 'Processing',
	ProcessedAt = GETDATE()
    WHERE ShipmentID = @ShipmentID;
	WAITFOR DELAY '00:00:01';
	UPDATE ShipmentQueue 
	SET Status = 'Completed' WHERE ShipmentID = @ShipmentID;
	PRINT 'Shipment with ID : ' + CAST(@ShipmentID AS VARCHAR(5)) + ' Processed';
	SET @ShipmentID = NULL;
	SELECT TOP 1 @CreatedAt = CreatedAt, @ShipmentID = ShipmentID FROM ShipmentQueue WHERE Status = 'Pending' ORDER BY CreatedAt , ShipmentID; 
END


