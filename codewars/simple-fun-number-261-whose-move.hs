module Kata.WhoseMove (whoseMove) where

whoseMove :: String -> Bool -> String
whoseMove lastPlayer win
  | (lastPlayer == "black" && win) || (lastPlayer == "white" && not win) = "black"
  | otherwise = "white"
