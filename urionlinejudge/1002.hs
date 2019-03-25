{-input
150.00
-}
import Text.Printf

pi' :: Double
pi' = 3.14159

main = do
    r <- readLn
    putStrLn ("A=" ++ printf "%.4f"  (((r ^ 2) * pi') :: Double))