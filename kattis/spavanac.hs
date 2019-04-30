import Text.Printf

main = solve =<< getLine
  where
    solve x = do
      let input = map (read :: String -> Int) $ words x
      putStrLn $ printf "%2d %2d" ((input !!0 - (if input !!1 <= 45 then 1 else 0)) `mod` 24) ((input !!1 - 45) `mod` 60)
