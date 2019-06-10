module Narcissistic where

import Data.Char (digitToInt)

narcissistic :: Integral n => n -> Bool
narcissistic n = sum [(toInteger $ digitToInt x) ^ p | x <- n_s] == toInteger n
  where
    n_s = (show $ toInteger n) :: String
    p = toInteger $ length n_s
