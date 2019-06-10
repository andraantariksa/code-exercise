import Text.Printf

prefzero :: String -> String
prefzero xs = if mod (length xs) 4 /= 0 then prefzero ('0':xs) else xs 

toBin :: Integer -> String
toBin n = printf "%b" n

group :: Int -> [a] -> [[a]]
group _ [] = []
group n l
  | n > 0 = (take n l) : (group n (drop n l))
  | otherwise = error "Negative or zero n"

solve :: String -> IO ()
solve n = do
  putStrLn . unwords $ group 4 $ prefzero . toBin . read $ n

main = do
  _ <- getLine
  c <- getContents
  mapM solve $ lines c
