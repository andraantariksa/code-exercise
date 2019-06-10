import Data.List (sort, takeWhile, inits)

main = do
  max_min' <- getLine
  _ <- getLine
  let max_min = read max_min' :: Int
  rest_chores <- getContents
  let chores = sort $ map (read :: String -> Int) $ lines rest_chores
  print . length . last $ takeWhile (\x -> sum x <= max_min) $ inits chores
