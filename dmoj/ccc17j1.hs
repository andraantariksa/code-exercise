import Control.Monad

solve :: Int -> Int -> Int
solve x y
 | x > 0 && y > 0 = 1
 | x < 0 && y > 0 = 2
 | x < 0 && y < 0 = 3
 | x > 0 && y < 0 = 4

main = do
  [x, y] <- replicateM 2 $ fmap (read :: String -> Int) getLine
  print $ solve x y
