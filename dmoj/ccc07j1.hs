import Control.Monad
import Data.List

main = do
  x <- replicateM 3 $ fmap (read :: String -> Int) getLine
  print $ sort x !!1
