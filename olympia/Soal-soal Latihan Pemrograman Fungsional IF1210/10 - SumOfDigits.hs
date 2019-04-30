module SumOfDigits where

sumOfDigits :: Int -> Int
sumOfDigits n
  | n > 9 = mod n 10 + sumOfDigits (div n 10)
  | otherwise = n
