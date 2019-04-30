import Control.Monad

solve :: [Int] -> [Int] -> String
solve a b
  | a' > b' = "A"
  | a' < b' = "B"
  | otherwise = "T"
  where
    a' = foldl (\acc (i, v) -> acc + v * i) 0 $ zip [1..] a
    b' = foldl (\acc (i, v) -> acc + v * i) 0 $ zip [1..] b

main = do
  a <- replicateM 3 $ fmap (read :: String -> Int) getLine
  b <- replicateM 3 $ fmap (read :: String -> Int) getLine
  putStrLn $ solve (reverse a) (reverse b)
