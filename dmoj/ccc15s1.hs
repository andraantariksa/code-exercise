solve :: [Int] -> [Int]
solve xxs = reverse . solve' 0 $ reverse xxs
  where
    solve' _ [] = []
    solve' n (x:xs)
      | x == 0 = solve' (n + 1) xs
      | n > 0 = solve' (n - 1) xs
      | otherwise = x:solve' 0 xs

main = do
  _ <- getLine
  cs <- map (read :: String -> Int) <$> lines <$> getContents
  let res = solve cs in print . sum $ if null res then [0] else res
