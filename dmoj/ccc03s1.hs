import Text.Printf

solve :: [Int] -> IO ()
solve xxs = solve' 1 xxs
  where
    solve' :: Int -> [Int] -> IO ()
    solve _ [] = []
    solve' pos (x:xs)
      | x == 0 = putStrLn "You Quit!"
      | otherwise = do
                      let y = move pos x
                      putStrLn $ printf "You are now on square %d" y
                      if y == 100 then putStrLn "You Win!" else solve' y xs
    move pos step
      | next > 100 = pos
      | next == 54 = 19
      | next == 90 = 48
      | next == 99 = 77
      | next == 9 = 34
      | next == 40 = 64
      | next == 67 = 86
      | otherwise = next
      where
        next = pos + step

main = do
  cs <- map (read :: String -> Int) <$> lines <$> getContents
  solve cs
