import Data.List
import Control.Monad

solve :: [Int] -> String
solve l
  | sum l /= 180 = "Error"
  | all (==60) l = "Equilateral"
  | (length $ filter (== l !!1) l) == 2 = "Isosceles"
  | otherwise = "Scalene"

main = do
  x <- replicateM 3 $ fmap (read :: String -> Int) getLine
  putStrLn $ solve $ sort x
