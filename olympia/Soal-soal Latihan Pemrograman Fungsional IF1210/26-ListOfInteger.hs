module ListOfInteger where

listPlus :: [Int] -> [Int] -> [Int]
listPlus x1 x2 = map (\x -> fst x + snd x) $ zip x1 x2
