__author__ = 'Darshan Kokare'
"""

Exercise 3.5 
2. Write a Python program to evaluate the following iteratively. Continue the iteration until the 
change due to the last element as a fraction of the latest value is less than 10^ −6: 
"""
import math


def algorithm1(x=1, r=1):
    old_iter_sum = 0
    iter_sum = 1
    while True:
        iter_sum += float(x) / math.factorial(r)
        r += 1
        if abs(iter_sum) - abs(old_iter_sum) < (10 ** -6):
            if old_iter_sum != 1:
                return iter_sum
        old_iter_sum = iter_sum


def algorithm2(x=1, r=1):
    old_iter_sum = 0
    iter_sum = 1
    sq = 1
    while True:
        iter_sum += float(x ** sq) / math.factorial(r)
        sq += 1
        r += 1
        if abs(iter_sum) - abs(old_iter_sum) < (10 ** -6):
            if old_iter_sum != 1:
                return iter_sum
        old_iter_sum = iter_sum


print(algorithm1(1))
