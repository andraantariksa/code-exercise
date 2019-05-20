module Kata (replace) where

isVowel :: Char -> Bool
isVowel x = elem x "aiueoAIUEO"

replace :: String -> String
replace x = map (\c -> if isVowel c then '!' else c) x
