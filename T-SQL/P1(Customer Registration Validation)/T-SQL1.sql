

DECLARE @Email VARCHAR(100),
@FirstName VARCHAR(50) = 'john',
@LastName VARCHAR(50) = 'Issac',
@Phone VARCHAR(20) = '0102010201';

SET @Email = 'john@gmail.com';

IF Exists (SELECT TOP 1 Found = 1 FROM Customers WHERE Email = @Email)
	BEGIN
	PRINT 'Customer is not inserted';
	END
ELSE
	BEGIN
	INSERT INTO Customers (FirstName,LastName,Email,Phone) VALUES (@FirstName,@LastName,@Email,@Phone);
	PRINT 'Customer is inserted';
	END