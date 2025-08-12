module Bob (responseFor) where

import Data.Char
import Data.List

responseFor :: String -> String
responseFor xs
    | all isSpace xs = "Fine. Be that way!"
    | isQuestion = if isYelling then "Calm down, I know what I'm doing!"
                                else "Sure."
    | isYelling = "Whoa, chill out!"
    | otherwise = "Whatever."
    where isQuestion = last (dropWhileEnd isSpace xs) == '?'
          letters = filter isLetter xs
          isYelling = length letters /= 0 && all isUpper letters
