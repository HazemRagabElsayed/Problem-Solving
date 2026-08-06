DECLARE @AccountID INT = 1,
@MonthNumber INT = 1,
@OpeningBalance DECIMAL(18,2),
@InterestEarned DECIMAL(18,2),
@ClosingBalance DECIMAL(18,2),
@AnnualInterestRate DECIMAL(5,2);

	SELECT @OpeningBalance = Balance, @AnnualInterestRate = AnnualInterestRate 
	FROM SavingsAccount 
	WHERE  AccountID = @AccountID;

WHILE @MonthNumber <= 12
BEGIN

	SET @InterestEarned = @OpeningBalance * (@AnnualInterestRate/12/100);
	SET @ClosingBalance = @OpeningBalance + @InterestEarned;
	INSERT INTO InterestHistory (AccountID ,MonthNumber ,OpeningBalance,InterestEarned,ClosingBalance,CalculatedAt)
	VALUES (@AccountID, @MonthNumber,@OpeningBalance,@InterestEarned,@ClosingBalance,GETDATE())

	SET @MonthNumber += 1;
	SET @OpeningBalance = @ClosingBalance;

END
