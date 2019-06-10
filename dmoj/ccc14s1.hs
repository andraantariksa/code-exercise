solve :: [Int] -> [Int] -> [Int]
solve [] l = l
solve (rm:rms) l = solve rms $ map snd $ filter (\x -> fst x `mod` rm /= 0) $ zip [1..] l

main = do
  n <- read <$> getLine :: IO Int
  _ <- getLine
  rm <- map (read :: String -> Int) <$> lines <$> getContents
  mapM print $ solve rm [1..n]
