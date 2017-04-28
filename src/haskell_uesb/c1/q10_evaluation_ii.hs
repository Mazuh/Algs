-- Dada a função abaixo
fun :: (Int) -> Int
fun x | x < 10    = 1
      | x < 5     = 2
      | otherwise = 3
-- Qual o resultado das seguintes avaliações?
-- a) Q: fun 1
--    R: 1
-- b) Q: fun 7
--    R: 1