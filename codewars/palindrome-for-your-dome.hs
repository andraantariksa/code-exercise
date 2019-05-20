module Codewars.Kata.Palindrome where
import Prelude hiding (reverse)
import Data.Char

checkPalindrome :: String -> Bool
checkPalindrome [] = True
checkPalindrome [_] = True
checkPalindrome xs = head xs == last xs && (checkPalindrome $ init $ tail xs)

isPalindrome :: String -> Bool
isPalindrome xs = checkPalindrome $ map toLower (filter isAlphaNum xs)
