import Control.Monad (replicateM)


merge :: (Ord a) => [a] -> [a] -> [a]
merge [] [] = []
merge [] yall@(y:ys) = y : merge [] ys
merge xall@(x:xs) [] = x : merge xs []
merge xall@(x:xs) yall@(y:ys) = if x < y then x : merge xs yall else y : merge xall ys

sort :: (Ord a) => [a] -> [a]
sort = mergeAll . map (:[])
  where
    mergeAll [] = []
    mergeAll [t] = t
    mergeAll xs  = mergeAll (mergePairs xs)

    mergePairs (x:y:xs) = merge x y:mergePairs xs
    mergePairs xs = xs

main = do
  [_, a, _, b] <- replicateM 4 getLine
  let
    x = map read $ words a :: [Int]
    y = map read $ words b :: [Int]
    in
      putStrLn $ unwords $ map show $ sort (x ++ y)
