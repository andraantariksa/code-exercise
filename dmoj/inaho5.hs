main = do
  _ <- getLine
  x <- map (read :: String -> Integer) <$> words <$> getLine
  print . sum $ filter (<0) x
