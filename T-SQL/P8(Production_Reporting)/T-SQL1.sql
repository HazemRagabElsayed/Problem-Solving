USE Inventory_DB
GO

SELECT ProductID,ProductName,UnitsInStock,ReorderLevel,Discontinued,
InventoryStatus = CASE
						WHEN Discontinued = 1 THEN 'Discontinued'
						WHEN UnitsInStock = 0 THEN 'Out of Stock'
						WHEN UnitsInStock <= ReorderLevel THEN 'Reorder Required'
						ELSE 'In Stock'
				  END
FROM Products