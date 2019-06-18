import Data.Bits

numberOf1Bits :: Int -> Int
numberOf1Bits n = snd (
    until (\(n, _) -> n == 0) (\(n, res) -> (n .&. (n - 1), res + 1)) (n, 0))
