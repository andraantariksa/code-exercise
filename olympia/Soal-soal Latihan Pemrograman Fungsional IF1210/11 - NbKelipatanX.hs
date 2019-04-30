module NbKelipatanX where

nbKelipatanX :: Int -> Int -> Int -> Int
nbKelipatanX start end divis = length [x | x <- [start..end], mod x divis == 0]
