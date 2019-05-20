module Codewars.Kata.Spinning where

spinWords :: String -> String
spinWords str = unwords $ map (\x -> if length x >= 5 then reverse x else x) (words str)
