module KonversiSuhu where

konversiSuhu :: Float -> Char -> Float
konversiSuhu n 'C' = n
konversiSuhu n 'R' = 0.8 * n
konversiSuhu n 'F' = 1.8 * n + 32
konversiSuhu n 'K' = n + 273.15
