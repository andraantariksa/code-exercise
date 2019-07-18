import Control.Applicative

solve :: [String] -> Int
solve [a, b] = read $ reverse $ show $ (read $ reverse a) + (read $ reverse b)

main = mapM (print . solve . words) =<< tail <$> lines <$> getContents
