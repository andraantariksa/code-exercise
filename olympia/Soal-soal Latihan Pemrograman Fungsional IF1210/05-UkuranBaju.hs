module UkuranBaju where

ukuranBaju :: Int -> Int -> Int
ukuranBaju t bb
  | t <= 150 = 1
  | t > 170 && bb > 60 && bb <= 80 = 3
  | t > 150 && t <= 170 && bb <= 80 = 2
  | t > 150 && t <= 170 && bb > 80 = 3
  | t > 170 && bb <= 60 = 2
  | otherwise = 4
