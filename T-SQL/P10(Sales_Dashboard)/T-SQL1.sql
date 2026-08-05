

SELECT Country, TotalOrders = COUNT(*),
CompletedOrders = COUNT(CASE 
							WHEN OrderStatus ='Completed' THEN 1 
					    END),
PendingOrders = COUNT(CASE 
							WHEN OrderStatus ='Pending' THEN 1 
					  END),
CancelledOrders = COUNT(CASE
							WHEN OrderStatus ='Cancelled' THEN 1
						END),
CompletedSales = SUM(CASE
						WHEN OrderStatus ='Completed' THEN TotalAmount
					 END),
AverageCompletedSale = AVG(CASE 
							WHEN OrderStatus ='Completed' THEN TotalAmount 
					    END) 
FROM Orders
GROUP BY Country


SELECT Country,CompletedOrders = COUNT(CASE 
							WHEN OrderStatus ='Completed' THEN 1 
							ELSE NULL 
					    END)
						FROM Orders GROUP BY Country

