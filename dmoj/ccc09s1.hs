main = do
  a <- read <$> getLine :: IO Integer
  b <- read <$> getLine :: IO Integer
  print . length $ filter (\x -> floor ( sqrt ( fromIntegral x )) ^ 2 == x) $ takeWhile (<=b) [x ^ 3 | x <- [1..], x ^ 3 >= a]
