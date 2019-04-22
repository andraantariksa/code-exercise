module Codewars.Kata.Shortcut where

isVowel :: Char -> Bool
isVowel c = elem c "aiueo"

shortcut :: String -> String
shortcut xs = [x | x <- xs, not $ isVowel x]
