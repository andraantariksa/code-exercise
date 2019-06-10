bmi :: [Double] -> String
bmi [w, h]
  | n' > 25.0 = "Overweight"
  | n' < 18.5 = "Underweight"
  | otherwise = "Normal weight"
  where
    n' = w / h ** 2

main = putStrLn <$> bmi =<< map (read :: String -> Double) <$> lines <$> getContents
