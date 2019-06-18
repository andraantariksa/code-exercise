import Data.Ord (comparing)
import Data.List (maximumBy, intersect, groupBy)
import qualified Data.Set as S

subStrings :: String -> [String]
subStrings s =
  let intChars = length s
  in [ take n $ drop i s
     | i <- [0 .. intChars - 1] 
     , n <- [1 .. intChars - i] ]

ngrams :: Int -> String -> [String]
ngrams n s | n > length s = []
           | otherwise    = take n s : ngrams n (drop 1 s)

-- find the longest common substring of multiple strings
longestCommon :: [String] -> String
longestCommon xs = go 0 $ length (head xs) + 1
 where
  -- find a substring of a given length n that is common to all strings
  commonSubstrings n = foldr1 S.intersection (map (S.fromList . ngrams n) xs)
  go l r
    -- if the binary search ended, pick one common substring
    | r - l == 1 = S.findMin $ commonSubstrings l
    | otherwise
    = if S.null $ commonSubstrings m
      then go l m    -- the length is too big, try a smaller one
      else go m r    -- try longer length to find longer substring
   where
    m = (l + r) `div` 2    -- the middle point

main :: IO ()
main = do
  content <- lines <$> getContents
  putStrLn $ longestCommon $ map (\(_:xs) -> concat xs) $ groupBy (\(c1:_) (c2:_) -> c1 == '>' && c2 /= '>') content
