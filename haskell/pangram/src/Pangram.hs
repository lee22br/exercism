module Pangram (isPangram) where
import Data.Char (toLower)

isPangram :: String -> Bool
isPangram text =
    all (`elem` lowerCase) lowerLetters
  where
    lowerCase = map toLower text
    lowerLetters = ['a'..'z']
