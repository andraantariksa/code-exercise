{-input
25
100
5.50
-}
import Text.Printf

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Float
    c <- readLn :: IO Float
    putStrLn ("NUMBER = " ++ show a)
    putStrLn ("SALARY = U$ " ++ printf "%0.2f" ((b*c) :: Float))