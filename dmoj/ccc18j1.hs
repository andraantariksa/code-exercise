checkTelemarketer :: String -> String
checkTelemarketer (w:x:y:z)
  | (w == '8' || w == '9') && x == y && (z == ['8'] || z == ['9']) = "ignore"
  | otherwise = "answer"

main = putStrLn <$> checkTelemarketer =<< foldr (++) "" <$> lines <$> getContents
