'''
Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].
'''

def f(integers: list) -> list:
    products = []
    for (integer_i, integer) in enumerate(integers):
        product = 1
        for (another_i, another) in enumerate(integers):
           if another_i != integer_i:
               product *= another
        products.append(product)

    return products

assert f([1, 2, 3, 4, 5]) == [120, 60, 40, 30, 24]
assert f([3, 2, 1]) == [2, 3, 6]

