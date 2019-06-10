solve :: Int -> Int
solve n = div ((n - 1) * (n - 2) * (n - 3)) 6

main = print =<< solve <$> (read :: String -> Int) <$> getLine
