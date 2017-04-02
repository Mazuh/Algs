def salary(n):
    if n == 0: return 50000
    else: return salary(n-1) + 1000 + 0.05*salary(n-1)
