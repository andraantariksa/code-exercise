module ListOfInteger where

elmtKeN :: [Int] -> Int -> Int
elmtKeN x i = x !!(i - 1)
