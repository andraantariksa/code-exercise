import System.IO (isEOF)

solve' :: String -> Int
solve' n = ceiling $ logBase 2 (read n :: Double)

solve = do
  done <- isEOF
  if done then return () else do
    print . solve' =<< getLine
    solve

main = solve
