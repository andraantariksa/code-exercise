module DeretSegitiga where

deretSegitiga :: Int -> Int
deretSegitiga n = solve 1 0
  where
    solve n' i
      | i == n = n' - 1
      | otherwise = n' + i + solve n' (i + 1)
