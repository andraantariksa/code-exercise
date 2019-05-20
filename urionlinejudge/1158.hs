sumOdd :: [Int] -> Int
sumOdd [x1:x2] = sum $ take x2 [x3, x3 + 2..]
  where
    x3 = x1 + x1 `mod` 2

main = do
  _ <- getLine
  fmap (\x-> print $ sumOdd $ map (read :: String -> Int) $ words x) =<< getLine
