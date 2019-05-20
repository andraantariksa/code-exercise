module LengthRecursively where

lenR :: [a] -> Int
lenR [] = 0
lenR [_] = 1
lenR (_:xs) = 1 + lenR xs
