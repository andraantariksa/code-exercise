notChangedByRotation :: Char -> Bool
notChangedByRotation c = elem c "IOSHZXN"

solve :: String -> String
solve x
  | all notChangedByRotation x = "YES"
  | otherwise = "NO"

main = putStrLn <$> solve =<< getLine
