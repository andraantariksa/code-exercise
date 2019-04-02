SELECT s1.* FROM stadium AS s1, stadium AS s2, stadium AS s3 WHERE
(
    ((s2.id = s1.id + 1) AND (s3.id = s1.id + 2))
    OR
    ((s2.id = s1.id - 1) AND (s3.id = s1.id - 2))
    OR
    ((s2.id = s1.id - 1) AND (s3.id = s1.id + 1))
)
AND s1.people >= 100 AND s2.people >= 100 AND s3.people >= 100
GROUP BY s1.id
