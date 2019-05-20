module ParseFloat where

import Text.Read

parseFloat :: String -> Maybe Float
parseFloat s = (readMaybe :: String -> Maybe Float) s
