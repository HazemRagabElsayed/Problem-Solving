DECLARE @ProductID INT = 6,
@RequestedQuantity INT = 10,
@IsDiscontinued BIT,
@AvailableQuentity INT;


IF NOT EXISTS(SELECT TOP 1 Found = 1 FROM Products WHERE ProductID = @ProductID)
	PRINT 'Error : Product does not exist';
ELSE IF NOT EXISTS (SELECT TOP 1 Found = 1 FROM Products WHERE ProductID = @ProductID AND IsDiscontinued = 1)
	PRINT 'Reject the order'
ELSE IF NOT EXISTS (SELECT TOP 1 Found = 1 FROM Products WHERE ProductID = @ProductID AND @RequestedQuantity <= StockQuantity)
	BEGIN
	 SELECT TOP 1 @AvailableQuentity = StockQuantity FROM Products WHERE ProductID = @ProductID;
	 PRINT 'Available quentity is : ' + CAST(@AvailableQuentity AS VARCHAR(10));
	END
ELSE
	BEGIN
	UPDATE Products
	SET StockQuantity = StockQuantity - @RequestedQuantity WHERE @ProductID = ProductID;
	PRINT 'product is ordered successfully'
	END
