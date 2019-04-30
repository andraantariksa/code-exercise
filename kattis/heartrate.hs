import Text.Printf

main = do
  _ <- getLine
  mapM solve =<< lines <$> getContents
  where
    solve x = do
      let input = map (read :: String -> Double) $ words x
      let bpm = 60 / input !!1
      let abpm = bpm * input !!0
      putStrLn $ printf "%.4f %.4f %.4f" (abpm - bpm) abpm (abpm + bpm)
