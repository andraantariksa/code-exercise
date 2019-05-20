module FizzBuzz(fizzbuzz) where

fizzbuzz :: Int -> [String]
fizzbuzz n = [(if mod x 3 == 0 then "Fizz" else "") ++ (if mod x 5 == 0 then "Buzz" else "") ++ (if not (mod x 3 == 0) && not (mod x 5 == 0) then show x else "") | x <- [1..n]]
