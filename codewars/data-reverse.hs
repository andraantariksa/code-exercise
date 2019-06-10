module Codewars.Kata.DataReverse where

import Data.List.Split (chunksOf)

dataReverse :: [Int] -> [Int]
dataReverse xs = concat . reverse $ chunksOf 8 xs
