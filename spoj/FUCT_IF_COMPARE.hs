import Control.Applicative

solve xs
  | a > b  = show a ++ " is greater than " ++ show b
  | a < b = show a ++ " is smaller than " ++ show b
  | otherwise = "n is equal m: " ++ show a
  where
    xs_i = map read $ words xs :: [Int]
    a = head xs_i
    b = last xs_i

main = mapM (putStrLn . solve) =<< tail <$> lines <$> getContents
