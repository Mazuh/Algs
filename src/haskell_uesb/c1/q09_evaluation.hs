-- Deda a função abaixo
fun :: (Int) -> Int
fun x | x < 10 = 1
      | x < 100 = 2
      | x < 1000 = 3
      | otherwise = 4
-- Qual o resultado das seguintes avaliações?
-- a) Q: fun 400
--    R: 3
-- b) Q: fun 50
--    R: 2
-- c) Q: fun 1050
--    R: 4
-- d) Q: fun 0
--    R: 1
