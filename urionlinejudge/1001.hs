{-input
1
2
-}
main = do
	a <- readLn
	b <- readLn
	putStrLn ("X = " ++ (show (a+b)))