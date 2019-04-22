module Codewars.Kata.Grade where

grader :: Double -> Char
grader n
  | 1.0 < n || 0.6 > n = 'F'
  | 0.9 <= n = 'A'
  | 0.8 <= n = 'B'
  | 0.7 <= n = 'C'
  | 0.6 <= n = 'D'
