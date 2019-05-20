main = do
  _ <- getLine
  s <- lines <$> getContents
  mapM (\x -> do
  let l = (map (read :: String -> Int) $ words x)
  print $ first l - last l) s
