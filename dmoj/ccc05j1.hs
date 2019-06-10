import Control.Monad (replicateM)
import Text.Printf

cheap :: Double -> Double -> String
cheap a b
  | a > b = "Plan B is cheapest."
  | a < b = "Plan A is cheapest."
  | a == b = "Plan A and B are the same price."

main = do
  [dt, e, wk] <- map (read :: String -> Double) <$> replicateM 3 getLine
  let a = (if (dt - 100.0) <= 0 then 0 else (dt - 100.0) * 0.25) + e * 0.15 + wk * 0.20
  let b = (if (dt - 250.0) <= 0 then 0 else (dt - 250.0) * 0.45) + e * 0.35 + wk * 0.25
  let a' = printf "%.02f" a
  let b' = printf "%.02f" b
  putStrLn $ (++) "Plan A costs " $ a'
  putStrLn $ (++) "Plan B costs " $ b'
  putStrLn $ cheap (read a') (read b')
