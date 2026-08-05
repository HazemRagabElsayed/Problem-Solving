
USE HR_DB
GO

SELECT EmployeeID,EmployeeName,Department,Salary,
BonusPercentage = CASE 
						WHEN Department ='IT' THEN
							CASE WHEN Salary < 10000 THEN 10
							ELSE 15
						END
						WHEN Department ='Sales' THEN
							CASE WHEN Salary < 8000  THEN 8
							ELSE 12
						END
						WHEN Department ='Finance' THEN 18
						WHEN Department = 'HR' THEN 5
						ELSE NULL
				  END

FROM Employees