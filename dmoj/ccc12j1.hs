speedCheck n
  | n <= 0 = "Congratulations, you are within the speed limit!"
  | n <= 20 = "You are speeding and your fine is $100."
  | n <= 30 = "You are speeding and your fine is $270."
  | otherwise = "You are speeding and your fine is $500."

main = do
  limit <- readLn
  speed <- readLn
  putStrLn . speedCheck $ speed - limit
