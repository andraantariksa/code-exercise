module Codewars.Exercises.RepeatIt where

repeatIt :: String -> Int -> String
repeatIt str n = concat $ replicate n str
