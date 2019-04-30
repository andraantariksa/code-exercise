main = do
  contents <- getContents
  print . length . uniq $ map (\x -> read x `mod` 42) $ lines contents
  where
    uniq :: [Int] -> [Int]
    uniq [] = []
    uniq (x:xs) = x : uniq (filter (/=x) xs)
