isSpecial :: Int -> Int -> String
isSpecial m d
  | m < 2 = "Before"
  | m > 2 = "After"
  | d < 18 = "Before"
  | d > 18 = "After"
  | otherwise = "Special"

main = do
  m' <- getLine
  d' <- getLine
  putStrLn $ isSpecial (read m') (read d')
