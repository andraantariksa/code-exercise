import Data.List

main = do
  _ <- getLine
  mapM print =<< rmMin . lines <$> getContents
  where
    rmMin :: [String] -> [Int]
    rmMin = sort . map read
