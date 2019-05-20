import Data.Char (digitToInt)
import Text.Printf

toDec :: [Char] -> Int
toDec = foldl (\acc x -> acc * 2 + digitToInt x) 0

main = solve =<< getLine
  where
    solve x = do
      print $ toDec $ reverse $ printf "%b" (read x :: Int)
