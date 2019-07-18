solve :: Int -> Int
solve n = solve' 0 n
  where
    solve' tot n'
      | n' >= 5 = solve' (tot + n' `div` 5) (n' `div` 5)
      | otherwise = tot

main = mapM (print . solve . read) =<< tail <$> lines <$> getContents
