
DECLARE @EmployeeID INT = 1,
@NewSalary DECIMAL(10,2),
@OldSalary DECIMAL(10,2),
@IncreasePercentage DECIMAL(5,2);

SET @NewSalary = 5500;

SELECT @OldSalary = Salary FROM Employees WHERE EmployeeID = @EmployeeID;

SET @IncreasePercentage =  CAST(((@NewSalary - @OldSalary) / @OldSalary * 100) AS DECIMAL(5,2));

IF @IncreasePercentage > 0 AND @IncreasePercentage <= 10 
	BEGIN
	UPDATE Employees
	SET Salary = @NewSalary WHERE EmployeeID = @EmployeeID;
	PRINT 'Automatically approved'
	END
ELSE IF @IncreasePercentage <= 20
	PRINT 'HR approval is required'
ELSE
	PRINT 'Rejected'
