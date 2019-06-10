main = do
  c <- getContents
  let val = map (read :: String -> Int) $ words c
  print $ div (val !! 0) (val !! 2) * div (val !! 1) (val !! 2)

