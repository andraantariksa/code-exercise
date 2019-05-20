module SumOfJusts where

sumJusts :: [Maybe Integer] -> Maybe Integer
sumJusts xs = Just . sum $ map (\x ->
  case x of
  Just z -> z) xs
