#!/usr/bin/python
# coding=utf-8
__author__ = 'Darshan Kokare'

"""

2. AA = ‘Mary had a little lamb’. ‘AA’ is a string here. Assign different names to each word in AA (b1, b2, ...), 
combine them in different combinations, and print out. 
"""

AA = 'Mary had a little lamb'
AA = AA.split(' ')
print(AA)

for i in range(len(AA)):
    string_ = "b%d = '%s'" % (i + 1, AA[i])
    exec(string_)


def permutation(list_):
    pass