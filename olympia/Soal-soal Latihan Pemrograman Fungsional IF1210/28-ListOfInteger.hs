module ListOfInteger where

import Data.List

mergeList :: [Int] -> [Int] -> [Int]
mergeList x1 x2 = sort $ x1 ++ x2
