main = do
  y <- getLine
  let z = filter (\x-> not $ x `elem` y) "BFTLC"
  putStrLn $ if z == [] then "NO MISSING PARTS" else z
