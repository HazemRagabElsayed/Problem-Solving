select * from ETL_RunHistory

DECLARE @LastRunDate DATE,
@Status VARCHAR(20);


IF EXISTS (SELECT TOP 1 Found = 1 FROM ETL_RunHistory WHERE RunDate = GETDATE() AND Status LIKE 'Com%' )
	BEGIN
	PRINT 'Already completed. Exit.';
	END
ELSE
	BEGIN
	PRINT 'Start ETL process.'
	END
	