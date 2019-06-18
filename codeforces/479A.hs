import Data.List (sort)

{-
    1+2*3=7
    1*(2+3)=5
    1*2*3=6
    (1+2)*3=9 
-}

main = do
  [a, b, c] <- map (read :: String -> Int) <$> lines <$> getContents
  let l = [a+b*c, a*b+c, a*(b+c), (a+b)*c, a*b*c, a+b+c]
  print $ maximum l
