main = do
  _ <- getLine
  res <- sum <$> map (\x -> sum $ map (read :: String -> Int) $ words x) <$> lines <$> getContents
  putStrLn $ if res == 0 then "YES" else "NO"
