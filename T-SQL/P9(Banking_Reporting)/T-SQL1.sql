SELECT AccountID,CustomerName,Balance,AccountType,IsFrozen
,AccountStatus = CASE 
					 WHEN IsFrozen = 1 THEN 'Frozen'
					 WHEN Balance < 0 THEN 'Overdrawn'
					 WHEN Balance = 0 THEN 'Zero Balance'
					 ELSE 'Active'
				 END
,MaintenanceFee = CASE 
						WHEN AccountType = 'Savings' THEN
						CASE
							WHEN Balance < 10000 THEN 25
							ELSE 0
						END
						WHEN AccountType = 'Checking' THEN 15
						WHEN AccountType = 'Business' THEN
						CASE
							WHEN Balance < 50000 THEN 50
							ELSE 0
						END
						ELSE NULL
				  END
				  
,RequiresAttention = CASE
							WHEN IsFrozen = 1 OR Balance <= 0 THEN 'Yes'
							ELSE 'No'
					 END
FROM BankAccounts