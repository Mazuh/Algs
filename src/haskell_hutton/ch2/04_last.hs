-- Show how the library function last that selects the last element of
-- a non-empty list could be defined in terms of the library 
-- functions introducedin this chapter. Can you think of another
-- possible definition?

last_ :: [t] -> t
last_ xs = xs !! (length xs - 1)
