import qualified Data.Set as Set

main = do
  _ <- getLine
  print . Set.size . Set.fromList =<< lines <$> getContents
