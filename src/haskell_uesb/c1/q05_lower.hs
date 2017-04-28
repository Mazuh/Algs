-- Defina a função menor :: Int -> Int que devolve
-- o menor de dois inteiros.

lower :: (Int, Int) -> Int
lower (a, b) | a < b = a
             | otherwise = b
