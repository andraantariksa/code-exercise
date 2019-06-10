main = do
  x <- read <$> getLine :: IO Int
  cs <- lines <$> getContents
  let splitted = splitAt x cs
  print . length $ filter (\x -> fst x == snd x) $ zip (fst splitted) (snd splitted)

