main = mapM solve =<< lines <$> getContents
  where
    solve x = do
      let val = map (read :: String-> Integer) $ words x
      print . abs (val !!0 - val !!1)
