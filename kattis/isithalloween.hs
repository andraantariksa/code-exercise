main = do
  input <- getLine
  if input == "OCT 31" || input == "DEC 25" then
    putStrLn "yup"
  else
    putStrLn "nope"
