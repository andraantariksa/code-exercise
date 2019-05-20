module ListOfInteger where

isMember :: [Int] -> Int -> Bool
isMember x n = elem n x
