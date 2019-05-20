module Codewars.G964.NoZeros where

noBoringZeros :: Int -> Int
noBoringZeros n
  | n == 0 = 0
  | mod n 10 == 0 = noBoringZeros $ div n 10
  | otherwise = n
