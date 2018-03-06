-- How should the definition of the function qsort be modified so
-- that it produces a reverse sorted version of a list?

qsort [] = []
qsort (x : xs) = qsort smaller ++ [x] ++ qsort larger
  where
    smaller = [a | a <- xs, a <= x]
    larger = [b | b <- xs, b > x]


rqsort [] = []
rqsort (x : xs) = rqsort largers ++ [x] ++ rqsort smallers
  where
     smallers = [n | n <- xs, n <= x]
     largers = [n | n <- xs, n > x]

