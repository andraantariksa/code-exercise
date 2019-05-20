module ListOfInteger where

countFactorOfX :: Int -> [Int] -> Int
countFactorOfX n x = length [q | q <- x, mod n q == 0]
