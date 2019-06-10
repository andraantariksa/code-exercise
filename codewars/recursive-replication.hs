module Replication where

recursivelyReplicate :: Int -> a -> [a]
recursivelyReplicate t n = replicate t []
  where
    replicate t' n'
      | t' == 0 = n'
      | t' < 0 = []
      | otherwise = replicate (t' - 1) (n:n')
