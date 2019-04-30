module Kata (remove) where

remove :: String -> Int -> String
remove [x] n = if x == '!' && n > 0 then "" else [x]
remove (x:xs) n = if x == '!' && n > 0 then remove xs (n - 1) else [x] ++ remove xs n
