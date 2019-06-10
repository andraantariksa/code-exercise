main = do
  n' <- getLine
  k' <- getLine
  let n = read n' :: Integer
  let k = read k' :: Integer
  print . sum $ [n * (10 ^ x) | x <- [0..k]]
