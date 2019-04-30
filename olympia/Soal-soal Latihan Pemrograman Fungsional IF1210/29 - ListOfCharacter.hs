module ListOfCharacter where

splitAlternate :: [Char] -> ([Char], [Char])
splitAlternate x = (map snd $ filter (\x -> odd $ fst x) x', map snd $ filter (\x -> even $ fst x) x')
  where
    x' = zip [1..] x
