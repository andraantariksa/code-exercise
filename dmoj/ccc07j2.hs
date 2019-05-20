solve :: String -> String
solve "CU" = "see you"
solve ":-)" = "I'm happy"
solve ":-(" = "I'm unhappy"
solve ";-)" = "wink"
solve ":-P" = "stick out my tongue"
solve "(~.~)" = "sleepy"
solve "TA" = "totally awesome"
solve "CCC" = "Canadian Computing Competition"
solve "CUZ" = "because"
solve "TY" = "thank-you"
solve "YW" = "you're welcome"
solve "TTYL" = "talk to you later"
solve xs = xs

main = mapM (putStrLn . solve) =<< lines <$> getContents
