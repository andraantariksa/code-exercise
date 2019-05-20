SELECT Customers.Name as Customers from Customers LEFT JOIN Orders on  Customers.Id = Orders.CustomerId WHERE Orders.CustomerId is NULL
