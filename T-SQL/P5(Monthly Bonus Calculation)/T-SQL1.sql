
DECLARE @RevenueTarget DECIMAL(10,2) = 100000,
@Month VARCHAR(15) = 'January',
@BonusRate DECIMAL(5,2) = 10;


IF EXISTS(SELECT TOP 1 Found = 1 FROM MonthlyRevenue WHERE Revenue > @RevenueTarget AND @Month = Month)
	BEGIN
	UPDATE Employees 
	SET Salary = Salary + (@BonusRate * Salary/ 100) WHERE BonusEligible = 1;
	PRINT 'Bonus calculated  because revenue target was reached'
	END
ELSE
	PRINT 'Bonus calculation skipped because revenue target was not reached'


	SELECT * FROM Employees;