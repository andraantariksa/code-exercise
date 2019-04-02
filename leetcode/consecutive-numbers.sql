SELECT DISTINCT l1.Num AS ConsecutiveNums FROM Logs AS l1 WHERE l1.Num = (SELECT Num  FROM Logs AS l2 WHERE l2.Id = l1.Id + 1) AND l1.Num = (SELECT Num  FROM Logs AS l3 WHERE l3.Id = l1.Id + 2)
