import Data.List (nub)

solve x = if x' == nub x' then x' else solve (x + 1)
  where
    x' = show x

main = putStrLn =<< solve <$> (+) 1 <$> (read :: String -> Int) <$> getLine
