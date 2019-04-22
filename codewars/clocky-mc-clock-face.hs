module Kata.ClockyMcClockFace (whatTimeIsIt) where
import Text.Printf
import Data.Fixed

whatTimeIsIt :: Float -> String
whatTimeIsIt angle = printf "%02d:%02d" hour ((floor (angle / 360 * 720) :: Int) `mod` 60)
  where hour = if angle < 30 then 12 else (floor (angle / 360 * 12) :: Int)
