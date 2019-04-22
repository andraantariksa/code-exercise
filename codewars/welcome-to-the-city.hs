module Welcome where
import Text.Printf

sayhello :: [String] -> String -> String -> String
sayhello x y z = printf "Hello, %s! Welcome to %s, %s!" (unwords x) y z
