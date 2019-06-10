import Data.List (elemIndex)
import Data.Maybe (fromJust)

setelt:: Int -> [a] -> [a] -> [a]
setelt i list newValue = 
  let (ys,zs) = splitAt (i - 1) list in  ys ++ newValue ++ tail zs

check_suffix (x:xs)
  | x == 'a' || x == 'i' || x == 'u' || x == 'e' || x == 'o' = False
  | otherwise = True

out_canadian xs = do
  let xs_r = reverse xs
  reverse $ setelt (1 + fromJust ( elemIndex 'o' xs_r )) xs_r "uo"

canadianize xs = do
  let xs_l = length xs
  if xs_l > 4 && check_suffix ( drop (xs_l - 3) xs ) then
    putStrLn $ out_canadian xs
  else
    putStrLn $ xs

solve = do
  inp <- getLine
  if inp == "quit!"
    then return ()
  else do
    canadianize inp
    solve

main = solve
