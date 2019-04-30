module IsPrime where

isPrime :: Integer -> Bool
isPrime x = null [x' | x' <-[2..floor $ sqrt $ fromIntegral x], x `mod` x' == 0] && x > 1
