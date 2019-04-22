module Codewars.Kata.PowerOfTwo where
import Data.Bits

isPowerOfTwo :: Int -> Bool
isPowerOfTwo n
  | n == 0 = False
  | otherwise = ((.&.) n (n - 1))  == 0
