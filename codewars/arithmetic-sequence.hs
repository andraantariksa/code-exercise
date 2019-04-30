module Term where

nthterm :: Int -> Int -> Int -> Int
nthterm n 0 o = n
nthterm n m o = o + nthterm n (m - 1) o
