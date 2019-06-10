primesTo m = eratos [2..m] where
  eratos (p : xs) 
    | p*p > m   = p : xs
    | otherwise = p : eratos (xs `minus` [p*p, p*p+p..m])
 
minus a@(x:xs) b@(y:ys) = case compare x y of
         LT -> x : minus  xs b
         EQ ->     minus  xs ys
         GT ->     minus  a  ys
minus a b = a

main = do
  _ <- getLine
  cs <- map (\x-> map (read :: String -> Int) $ words x) <$> lines <$> getContents
  let prime_l = primesTo 500
  mapM (\x -> print . length $ filter (\y -> y >= head x && y < last x) prime_l) cs
