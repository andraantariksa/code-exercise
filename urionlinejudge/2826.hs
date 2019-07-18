import Data.List

main = do
	a <- getLine
	b <- getLine
	mapM putStrLn $ if min (length a) (length b) == length(intersect a b)
	    then sortBy (\a b -> compare (length a) (length b)) [a, b]
	      else sort [a, b]
