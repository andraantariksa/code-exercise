module Codewars.Kata.Xor where

xor :: Bool -> Bool -> Bool
xor a b
  | a == True && b == False = True
  | a == False && b == True = True
  | otherwise = False
