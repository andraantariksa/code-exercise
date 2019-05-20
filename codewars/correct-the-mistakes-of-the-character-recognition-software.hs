module CodeWars.OCRMistakes where

repl :: String -> String
repl ('5':xs) = 'S' : repl xs
repl ('0':xs) = 'O' : repl xs
repl ('1':xs) = 'I' : repl xs
repl (x:xs) = x : repl xs
repl xs = xs

correct :: String -> String
correct = repl