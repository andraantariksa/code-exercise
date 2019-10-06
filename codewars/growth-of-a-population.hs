module Codewars.G964.Arge where

nbYear :: Int -> Double -> Int -> Int -> Int
nbYear p0 percent aug p = let
  nbYear' n tot
    | tot >= p = n
    | otherwise = nbYear' (n + 1) (tot + (floor $ (fromIntegral tot) * (percent / 100.0)) + aug)
  in
    nbYear' 0 p0