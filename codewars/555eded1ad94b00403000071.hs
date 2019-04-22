module Codewars.Kata.NthSeries where
import Text.Printf

seriesSum :: Integer -> String
seriesSum n = printf "%.2f" $ foldl (+) (0 :: Double) [(1 / (3 * (fromIntegral x) - 2)) | x <- [1..n]]
