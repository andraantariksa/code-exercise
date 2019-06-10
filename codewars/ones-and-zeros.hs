module OnesAndZeroes (toNumber) where

toNumber :: [Int] -> Int
toNumber z = foldr step 0 $ reverse z
  where step x y = (+) x ( (*) y 2 )
