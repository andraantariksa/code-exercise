solve n = map (\x -> unlines $ map concat x) $ map (replicate n) $ map (map (replicate n)) $ lines "*x*\n xx\n* *"

main = mapM putStr <$> solve =<< read <$> getLine
