palindrome str = str == reverse str

substrings []     = []
substrings (x:xs) = substrings' (x:xs) ++ substrings xs where
  substrings' []     = []
  substrings' (y:ys) = [y] : [ (y:s) | s <- substrings' ys ]

longest []     = []
longest (x:xs) = if length x > length max then x else max
  where max = longest xs

longest_palindrome xs = longest $ filter palindrome $ substrings xs

main = print . length . longest_palindrome =<< getLine
