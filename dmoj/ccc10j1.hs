main = do
  n' <- getLine
  let n = read n' :: Int
  print . length $ [0 | x <- [0..5], y <- [0..x], x + y == n]
