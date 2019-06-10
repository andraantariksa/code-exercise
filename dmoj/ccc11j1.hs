alienS :: [Int] -> IO ()
alienS [a, e] = do
  if a >= 3 && e <= 4 then putStrLn "TroyMartian" else return ()
  if a <= 6 && e >= 2 then putStrLn "VladSaturnian" else return ()
  if a <= 2 && e <= 3 then putStrLn "GraemeMercurian" else return ()
  return ()

main = alienS =<< map read <$> lines <$> getContents
