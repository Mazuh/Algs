-- Defina uma função maior3 :: Int -> Int -> Int -> Int
-- que devolve o maior de três números.

higher :: (Int, Int) -> Int
higher (a, b) | a > b = a
              | otherwise = b

higher3 :: (Int, Int, Int) -> Int
higher3 (a, b, c) = higher(higher(a, b), higher(b, c))
