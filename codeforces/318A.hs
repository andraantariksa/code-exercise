main = do
  [a, b] <- map (read :: String -> Int) <$> words <$> getLine
  print $ (!!) ([1, 3..a] ++ [2, 4..a]) (b - 1)
