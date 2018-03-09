-- Show how the library function init that removes the last
-- element from a non-empty list could similarly be defined
-- in two different ways.

init__ xs = take allButLast xs
  where
    allButLast = (length xs) - 1

init_ [x] = []
init_ (x:xs) = [x] ++ init_ xs
