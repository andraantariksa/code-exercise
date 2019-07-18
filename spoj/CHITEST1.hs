import Control.Applicative

solve :: String -> Double
solve xs = sum $ map read $ words xs

main = mapM (print . solve) =<< tail <$> lines <$> getContents
