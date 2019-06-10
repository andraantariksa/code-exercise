main = do
  _ <- getLine
  ren <- read <$> getLine :: IO Int
  rest <- fmap read <$> lines <$> getContents
  putStrLn $ if any (<ren) rest then "YES" else "NO"
