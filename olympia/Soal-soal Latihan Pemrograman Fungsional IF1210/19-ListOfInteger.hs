module ListOfInteger where

maxNb :: [Int] -> (Int, Int)
maxNb x = (maxN, maxNTotal)
  where
    maxNTotal = length $ filter (==maxN) x
    maxN = maximum x
