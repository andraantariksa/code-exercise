import Data.List

main = do
  x <- words <$> getLine
  let s = if last x == "True" then True else False
  print $ if mod (length . init $ x) 2 == 0 then s else not s
