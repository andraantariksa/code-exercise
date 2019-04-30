import Text.Printf

left :: Double -> Double
left n = n / log n

right :: Double -> Double
right n = n / log n * 1.25506

main = do
  n <- readLn
  printf "%.1f %.1f\n" (left n) (right n)
