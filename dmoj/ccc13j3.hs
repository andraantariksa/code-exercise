distinct :: String -> Bool
distinct [] = True
distinct (x:xs)
  | elem x xs = False
  | otherwise = distinct xs

distinctDigitYear :: Int -> Int
distinctDigitYear n
  | distinct $ show $ n + 1 = n + 1
  | otherwise = distinctDigitYear $ n + 1

main = do
  x <- readLn
  print $ distinctDigitYear x
