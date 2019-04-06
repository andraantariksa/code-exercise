SELECT customers.name, orders.id  FROM customers LEFT JOIN orders ON customers.id = orders.id_customers WHERE orders.orders_date < '2016-07-01'::date AND orders.orders_date > '2016-01-01'::date
