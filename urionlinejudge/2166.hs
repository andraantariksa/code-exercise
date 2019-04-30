import Text.Printf

rootApx :: Double -> Double
rootApx 0 = 0
rootApx n = 1.0 / (rootApx (n - 1) + 2.0)

main = do
  n <- getLine
  printf "%.10f\n" $ rootApx (read n :: Double) + 1.0
