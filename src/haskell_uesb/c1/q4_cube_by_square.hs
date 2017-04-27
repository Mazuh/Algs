-- Defina a função cubo utilizando a função quadrado.

square :: (Int) -> Int
square x = x^2

cube :: (Int) -> Int
cube x = square(x) * x
