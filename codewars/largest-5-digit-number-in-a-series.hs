module LargestDigits where

digit5 :: String -> Int
digit5 xs = let
  max5Dig :: Int -> String -> Int
  max5Dig maxVal (s:ss)
    | length ss < 4 = maxVal
    | otherwise = max5Dig (max maxVal (sNum $ s:ss)) ss
    where
      sNum :: String -> Int
      sNum xs = read $ take 5 xs
  in
    max5Dig 0 xs