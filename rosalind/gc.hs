import Data.List (maximumBy, groupBy)
import Text.Printf
totalCG = foldl (\acc x -> acc + if x == 'C' || x == 'G' then 1 else 0) 0 

groupFasta [] = []
groupFasta ((x1, x2):xs) = (tail x1, x2, (fromIntegral $ totalCG x2) / (fromIntegral $ length x2)):groupFasta xs

main = do
  content <- lines <$> getContents
  let (id, _, percentage) = maximumBy (\(_, _, p1) (_, _, p2) -> compare (p1 :: Double) (p2 :: Double)) $ groupFasta $ map (\(x:xs) -> (x, concat xs)) $ groupBy (\(c1:_) (c2:_) -> c1 == '>' && c2 /= '>') content
    in putStrLn $ printf "%s\n%.6f" id (percentage * 100)
