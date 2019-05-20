module Kata where

remove :: String -> String
remove x
  | last x == '!' = remove $ init x
  | otherwise = x
