module Codewars.Strings where
import Data.Char

lowercaseCount :: [Char] -> Int
lowercaseCount xs = length $ filter isLower xs
