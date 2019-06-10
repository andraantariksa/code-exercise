module Alphabetized.Kata (alphabetized) where

import Data.List (sortBy)
import Data.Char (toUpper, isAlpha)

alphabetized :: String -> String
alphabetized = filter isAlpha . sortBy (\x y -> compare (toUpper x) $ toUpper y)
