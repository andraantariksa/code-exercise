module DigitalRoot where

digitalRoot' :: Integral a => a -> a
digitalRoot' n
  | n > 9 = n `mod` 10  + digitalRoot' (n `div` 10)
  | otherwise = n

digitalRoot :: Integral a => a -> a
digitalRoot n =
  if n < 10 then
    n
  else
    digitalRoot $ digitalRoot' n
