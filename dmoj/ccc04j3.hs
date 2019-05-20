import Control.Monad

main = do
  a <- readLn
  b <- readLn
  x <- replicateM a $ getLine
  y <- replicateM b $ getLine
  mapM putStrLn [n ++ " as " ++ m | n <- x, m <- y]
