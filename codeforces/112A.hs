import Control.Monad
import Data.Char (toLower)

strcmp LT = -1
strcmp GT = 1
strcmp EQ = 0

main = do
  [a, b] <- map (map toLower) <$> replicateM 2 getLine
  print . strcmp $ compare a b
