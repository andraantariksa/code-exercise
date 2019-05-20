module MakeUpper where

import Data.Char

makeUpperCase :: [Char] -> [Char]
makeUpperCase str = map toUpper str
