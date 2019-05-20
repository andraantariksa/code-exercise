SELECT w1.Id AS Id FROM Weather AS w1 WHERE w1.Temperature > (SELECT w2.Temperature FROM WEATHER AS w2 WHERE TO_DAYS(w1.RecordDate) = TO_DAYS(w2.RecordDate) + 1)
