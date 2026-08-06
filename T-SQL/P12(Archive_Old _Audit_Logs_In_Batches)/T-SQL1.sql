DECLARE @ProcessedID TABLE (AuditID INT)
WHILE 1=1
BEGIN
	INSERT INTO  AuditLogArchive  (AuditID, UserID, ActionName,ActionDate,Details)
	OUTPUT INSERTED.AuditID INTO @ProcessedID (AuditID) 
	SELECT TOP 1000 AuditID, UserID, ActionName,ActionDate,Details
	FROM AuditLog WHERE ActionDate <= DATEADD(YEAR, -2, GETDATE())ORDER BY ActionDate ASC , AuditID ASC
	PRINT 'Number of rows Inserted in current batch :' + CAST(@@ROWCOUNT AS VARCHAR);
	DELETE  FROM AuditLog WHERE AuditID IN (SELECT AuditID FROM @ProcessedID)
	PRINT 'Number of rows Deleted in current batch :' + CAST(@@ROWCOUNT AS VARCHAR);
	DELETE FROM @ProcessedID;
	IF NOT EXISTS(SELECT 1 FROM AuditLog WHERE ActionDate <= DATEADD(YEAR, -2, GETDATE()))
		BREAK;
END
