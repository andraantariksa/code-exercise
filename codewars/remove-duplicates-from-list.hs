module RemoveDuplicates  where
import Data.List

distinct :: [Int] -> [Int]
distinct = map head . group
