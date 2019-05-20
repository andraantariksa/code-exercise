module MyLanguages where

import Data.List (sortBy)
import Data.Function (on)

type Language = String
type Score = Int

myLanguages :: [(Language,Score)] -> [Language]
myLanguages = map fst . filter ((>=60) . snd) . sortBy (flip compare `on` snd)
