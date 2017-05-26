salary :: (Float) -> Float
salary 0 = 50000.00
salary n = salary(n-1) + 1000 + 0.05*salary(n-1)
