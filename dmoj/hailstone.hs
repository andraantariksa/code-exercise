collatz :: Int -> Int -> Int
collatz o 1 = o
collatz o n = if odd n then collatz (o + 1) $ 3 * n + 1 else collatz (o + 1) $ n `div` 2

main = print <$> collatz 0 =<< read <$> getLine
