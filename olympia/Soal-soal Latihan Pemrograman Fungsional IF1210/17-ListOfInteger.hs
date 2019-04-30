module ListOfInteger where

nbOcc :: [Int] -> Int -> Int
nbOcc x n = length $ filter (==n) x
