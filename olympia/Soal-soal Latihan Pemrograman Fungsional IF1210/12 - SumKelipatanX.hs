module SumKelipatanX where

sumKelipatanX :: Int -> Int -> Int -> Int
sumKelipatanX start end divis = sum [x | x <- [start..end], mod x divis == 0]
