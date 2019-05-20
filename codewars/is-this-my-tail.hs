module Codewars.IsThisMyTail where

correctTail :: String -> Char -> Bool
correctTail bod tail = head (reverse bod) == tail
