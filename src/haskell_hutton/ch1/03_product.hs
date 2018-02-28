-- Define a function product that produces the product of a
-- list of numbers, and show using your definition
-- that product [2, 3, 4] = 24.

product_ [] = 1
product_ (x : xs) = x * product xs

