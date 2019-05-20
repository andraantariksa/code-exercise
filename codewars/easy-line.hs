module Codewars.Kata.Easyline where

factorial start end = product [start..end]

easyLine :: Integer -> Integer
easyLine n = div (factorial (n + 1) (2 * n)) (factorial 1 n)
