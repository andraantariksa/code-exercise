module Divisors where

divisors :: (Show a, Integral a) => a -> Either String [a]
divisors a = let
  divisors' = filter (\x -> mod a x == 0) [2..a - 1]
    in
      if length divisors' == 0 then Left (show a ++ " is prime") else Right divisors'