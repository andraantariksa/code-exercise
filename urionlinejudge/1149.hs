notZeroOrNeg :: [Int] -> Int
notZeroOrNeg [x] = x
notZeroOrNeg (x:xs)
  | x > 0 = x
  | otherwise = notZeroOrNeg xs

summingUp :: [Int] -> Int
summingUp (x:xs) = sum [x..x - 1 + notZeroOrNeg xs]

readInts :: IO [Int]
readInts = fmap (map read.words) getLine

main = do
  print . summingUp =<< readInts
