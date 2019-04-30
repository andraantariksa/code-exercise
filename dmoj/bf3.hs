is_prime :: Int -> Bool
is_prime 1 = False
is_prime n
  | (length [x | x <- 2 : [3, 5 .. floor $ sqrt $ fromIntegral n], mod n x == 0]) > 0 = False
  | otherwise = True

solve :: Int -> Int
solve n
  | n <= 2 = 2
  | is_prime n = n
  | otherwise = solve $ n + 1

main = print . solve =<< readLn
