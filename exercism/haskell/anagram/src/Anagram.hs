module Anagram (anagramsFor) where

import Data.List
import Data.Char

anagramsFor :: String -> [String] -> [String]
anagramsFor xs xss = filter (\xsss -> map toLower xsss /= map toLower xs && sort (map toLower xsss) == sort (map toLower xs)) xss
