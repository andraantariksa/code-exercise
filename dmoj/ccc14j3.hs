main = do
  _ <- getLine
  i <- map (\x -> map (read :: String -> Int) x) <$> map words <$> lines <$> getContents
  print $ (-) 100 $ sum . map last $ filter (\x -> head x < last x) i
  print $ (-) 100 $ sum . map head $ filter (\x -> head x > last x) i
