module ListOfCharacter where

makeUnique :: [Char] -> [Char]
makeUnique [] = []
makeUnique (x:xs) = x:makeUnique(filter (/=x) xs)
