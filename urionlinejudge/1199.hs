import Control.Monad
import Control.Applicative
import Text.Printf
import Numeric

solve :: String -> String
solve xs = if elem 'x' xs then show $ fst $ head $ readHex $ tail $ tail xs else printf "0x%X" (read xs :: Int)

main = mapM_ putStrLn =<< map solve . takeInputs . lines <$> getContents
  where
    takeInputs :: [String] -> [String]
    takeInputs xs = takeWhile (\x -> head x /= '-') xs
