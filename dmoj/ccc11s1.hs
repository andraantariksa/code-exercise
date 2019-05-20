import Data.Char

solve :: Int -> Int -> String
solve s t
  | t > s = "English"
  | otherwise = "French"

main = do
  _ <- getLine
  s <- map toLower <$> getContents
  putStrLn $ solve (length $ filter (=='s') s) (length $ filter (=='t') s)
