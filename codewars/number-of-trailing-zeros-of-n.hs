module Zeros where

zeros' :: Int -> Int -> Int -> Int
zeros' d n c = if (n `div` d) > 0 then zeros' (d * 5) n (c + (n `div` d)) else c

zeros :: Int -> Int
zeros 0 = 0
zeros n = zeros' 5 n 0
