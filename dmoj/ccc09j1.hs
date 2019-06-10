firstISBN :: [Int]
firstISBN = [9, 7, 8, 0, 9, 2, 1, 4, 1, 8]

solve :: [Int] -> Int
solve xs = foldl (\acc x -> acc + snd x * if (even $ fst x) then 1 else 3) 0 $ zip [0..] $ firstISBN ++ xs

main :: IO ()
main = putStrLn =<< (++) "The 1-3-sum is " <$> show <$> solve <$> fmap (read :: String -> Int) <$> lines <$> getContents
