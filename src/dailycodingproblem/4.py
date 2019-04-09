'''
Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

You can modify the input array in-place.
'''

def f(array: list) -> int:
    hashed_array = set(array)

    n = 1
    while n in hashed_array:
        n += 1

    return n

assert f([3, 4, -1, 1]) == 2
assert f([1, 2, 0]) == 3
