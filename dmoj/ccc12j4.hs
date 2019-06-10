import Data.Char (chr, ord)

lowBound c = if c < -26 then lowBound $ c + 26 else c

lowBound' c = if c < ord 'A' then lowBound  $ c + 26 else c

main = do
  k <- read <$> getLine :: IO Int
  s <- getLine
  let shift = map (\x -> lowBound $ 3 * x + k) [1..length s]
  putStrLn $ map (\x -> chr . lowBound' $ ord (fst x) - snd x) $ zip s shift
