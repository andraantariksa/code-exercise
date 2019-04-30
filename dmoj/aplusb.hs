main = do
  _ <- getLine
  mapM (\x -> print . sum $ map read $ words x) =<< lines <$> getContents
