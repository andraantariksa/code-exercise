module LuasBS where

luasBS :: Int -> Int
luasBS n = solve 0
  where
    solve p
      | p == n = 0
      | otherwise = n + solve (p + 1)
