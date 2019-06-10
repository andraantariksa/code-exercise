import Data.Maybe (fromJust)
import Data.List (elemIndex)

takeWhileInclusive :: (a -> Bool) -> [a] -> [a]
takeWhileInclusive _ [] = []
takeWhileInclusive p (x:xs) = x : if p x then takeWhileInclusive p xs else []

tpl :: (String, String) -> (String, Int)
tpl (f, s) = (f, read s :: Int)

main = do
  c <- getContents
  let l = takeWhileInclusive (\x-> fst x /= "Waterloo") $ map (\x -> tpl $ splitAt (fromJust $ elemIndex ' ' x) x) $ lines c
  let min_snd = minimum $ map snd l
  putStrLn . fst $ ( filter (\x -> snd x == min_snd) l) !! 0
