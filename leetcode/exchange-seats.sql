SELECT IF(((SELECT COUNT(*) FROM seat)%2 !=0 AND id + 1 > (SELECT COUNT(*) FROM seat)),id, (IF(id%2 != 0, id+1, id-1))) as id, student FROM seat ORDER BY id ASC
