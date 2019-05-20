main = do
  _ <- getLine
  mapM solve =<< lines <$> getContents
  where
    solve x = do
      let x' = map read $ words x
      let without_ads = x' !!0
      let with_ads_expected = x' !!1
      let ads_cost = x' !!2
      if without_ads == with_ads_expected - ads_cost then
        putStrLn "does not matter"
      else
        if without_ads < with_ads_expected - ads_cost then
          putStrLn "advertise"
        else
          putStrLn "do not advertise"
