
SELECT OrderID,CustomerName,TotalAmount, 
Category = CASE 
				WHEN TotalAmount < 100 THEN 'Budget'
				WHEN TotalAmount < 300 THEN 'Standard'
				WHEN TotalAmount < 700 THEN 'Premium'
				ELSE 'VIP'
				END
FROM Orders