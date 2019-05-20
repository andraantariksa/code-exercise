module Kata where

findOutlier :: [Int] -> Int 
findOutlier xs = if length x == 1 then head x else head $ filter even xs
  where
    x = filter odd xs
