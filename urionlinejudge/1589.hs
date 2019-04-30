import Control.Monad

readInts :: IO [Int]
readInts = fmap (map read.words) getLine

minimumRadius :: IO ()
minimumRadius = do
  xs <- readInts
  print $ sum xs

main = do
  n <- readLn
  replicateM_ n minimumRadius
