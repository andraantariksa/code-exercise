import Text.Printf

solve :: Int -> Int -> String
solve n w = printf "Minimum perimeter is %d with dimensions %d x %d" (w + l + w + l) w l
  where
    l = div n w

main = do
  cs <- map (read :: String -> Int) <$> takeWhile (/= "0") <$> lines <$> getContents
  mapM (\x -> putStrLn $ solve x $ floor $ sqrt $ fromIntegral x) cs
