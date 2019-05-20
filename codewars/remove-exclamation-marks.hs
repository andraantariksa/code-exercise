module RemoveExclamationMarks where

removeExclamationMarks :: String -> String
removeExclamationMarks str = filter (\c -> c /= '!') str
