import Control.Applicative

solve xs = map snd $ takeWhile (\x -> fst x < half_s) $ filter (\x -> even $ fst x) $ zip [0..] xs
  where
    half_s = length xs `div` 2

main = mapM (putStrLn . solve) =<< tail <$> lines <$> getContents
