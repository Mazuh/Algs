'''
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
'''

def f(numbers: list, k: int) -> bool:
    for current in numbers:
        for existing in numbers:
            if (current + existing) == k:
                return True
    return False

assert f(numbers=[10, 15, 3, 7], k=17)

