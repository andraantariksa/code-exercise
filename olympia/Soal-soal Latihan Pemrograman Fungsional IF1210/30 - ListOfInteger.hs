module ListOfInteger where

sumNeg :: [Int] -> Int
sumNeg x = sum $ filter (<0) x

nbElmtNeg :: [Int] -> Int
nbElmtNeg x = length $ filter (<0) x

statNeg :: [Int] -> (Int , Int)
statNeg x = (sumNeg x, nbElmtNeg x)
