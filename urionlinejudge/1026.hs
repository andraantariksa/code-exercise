import Data.Bits

main = mapM solve =<< lines <$> getContents
  where
    solve x =
      print $ foldr (xor) 0 (map (read :: String -> Int) $ words x)
