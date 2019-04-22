module Codewars.MichM.SimpleMultiplication where

simpleMultiplication :: Int -> Int
simpleMultiplication n
  | n `mod` 2 == 0 = n * 8
  | otherwise = n * 9
