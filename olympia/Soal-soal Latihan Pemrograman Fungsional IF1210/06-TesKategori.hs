module TesKategori where

tesKategori' :: Int -> Int -> [Int]
tesKategori' t bb
  | t > 100 && bb <= 150 = [2, 3, 4]
  | t <= 100 && bb <= 150 && bb > 30 = [1, 2]
  | t <= 100 && bb <= 30 = [1]
  | t <= 100 && bb > 150 = [2]
  | t > 100 && t <= 200 && bb > 150 = [2, 3]
  | otherwise = [0]

tesKategori :: Int -> Int -> Int -> Bool
tesKategori t bb k = elem k $ tesKategori' t bb
