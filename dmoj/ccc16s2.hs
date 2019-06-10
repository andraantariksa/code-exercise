import Data.List (sort)

main = do
  qType <- read <$> getLine :: IO Int
  _ <- getLine
  cs <- fmap (\x-> fmap (read :: String -> Int)  $ words x) <$> lines <$> getContents
  let a = sort $ cs !! 0
  let b = if qType == 1 then sort $ cs !! 1 else reverse . sort $ cs !! 1
  let f_cmp x = if fst x < snd x then snd x else fst x
  print $ foldr (\x y -> y + f_cmp x) 0 $ zip a b
