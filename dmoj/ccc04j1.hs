import Text.Printf

main = do
  x <- getLine
  printf "The largest square has side length %d." ((floor $ sqrt $ read x) :: Int)
