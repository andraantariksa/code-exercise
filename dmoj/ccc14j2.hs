solve :: Int -> Int -> String
solve a b
  | a > b = "A"
  | a < b = "B"
  | otherwise = "Tie"

main = do
  _ <- getLine
  x <- getLine
  putStrLn $ solve (length $ filter (=='A') x) (length $ filter (=='B') x)
