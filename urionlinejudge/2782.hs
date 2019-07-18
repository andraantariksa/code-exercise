insertLi x [] = x:[]
insertLi x xs = if head xs == x then xs else x:xs

solve (_:[]) ys = if length ys == 0 then 1 else length ys
solve (x1:x2:[]) ys = length (insertLi (x2 - x1) ys)
solve (x1:x2:xs) ys = solve (x2:xs) (insertLi (x2 - x1) ys)

main = do
	_ <- getLine
	inp' <- getLine
	let inp = map (read :: String -> Int) $ words inp' in print $ solve inp []
