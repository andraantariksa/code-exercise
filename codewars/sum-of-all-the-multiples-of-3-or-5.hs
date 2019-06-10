module SumOfMultiples where

findSum n = sum [x | x <-[3..n], mod x 3 == 0 || mod x 5 == 0]
