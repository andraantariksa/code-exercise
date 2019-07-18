solve :: Int -> Int
solve n = foldl (\acc x -> acc + 1 + (n `div` x) - x) 0 [1..floor . sqrt $ fromIntegral n]

main = print =<< solve <$> read <$> getLine
