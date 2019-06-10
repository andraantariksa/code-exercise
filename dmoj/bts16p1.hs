import Data.Char (isLower, isUpper, toUpper, toLower)

main = do
  s <- getLine
  let u = length $ filter isUpper s
  let l = length $ filter isLower s
  putStrLn $ if u > l then map toUpper s else if u < l then map toLower s else s
