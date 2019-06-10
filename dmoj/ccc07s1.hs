solve :: String -> String
solve xs = let
    [y, m, d] = map (read :: String -> Int) $ words xs
    is18yo y m d
      | y < y_lim = "Yes"
      | y == y_lim && m < 2 = "Yes"
      | y == y_lim && m == 2 && d <= 27 = "Yes"
      | otherwise = "No"
      where
        y_lim = (2007 - 18)
  in
    is18yo y m d

main = do
  _ <- getLine
  cs <- lines <$> getContents
  mapM (putStrLn . solve) cs
