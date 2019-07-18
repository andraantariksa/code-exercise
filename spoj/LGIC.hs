fact :: Int -> Int
fact 1 = 1
fact n = n * fact (n - 1)

solve :: Int -> Int
solve n = fact n + 2 ^ n - n

main = print =<< solve <$> read <$> getLine
