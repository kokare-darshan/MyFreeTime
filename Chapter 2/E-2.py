#!/usr/bin/python
# coding=utf-8
__author__ = 'Darshan Kokare'

"""

2. AA = ‘Mary had a little lamb’. ‘AA’ is a string here. Assign different names to each word in AA (b1, b2, ...), 
combine them in different combinations, and print out. 
"""

AA = 'Mary had a little lamb'
AA = AA.split(' ')
# print(AA)

for i in range(len(AA)):
    string_ = "b%d = '%s'" % (i + 1, AA[i])
    exec(string_)

unique_list = []

import copy


def permutation1(list_, pre_list_=None):
    if pre_list_ is None:
        pre_list_ = []
    global unique_list
    list_length = list_.__len__()
    for j_ in range(list_length):
        list_1 = copy.deepcopy(pre_list_)
        list_1.extend(left_round_shift(list_))
        unique_list.append(copy.deepcopy(list_1))
        if list_.__len__() <= 3:
            break
        else:
            permutation(list_[1:], list_[:1])
    return unique_list


def left_round_shift(list_: list, shift: int = 1):
    for i_ in range(shift):
        list_.append(list_[0])
        list_.pop(0)
    return list_


# dk_list = permutation(['1', '2', '3', '4'])
# print(dk_list)
# print(len(dk_list))


def permutation(lst):
    if len(lst) == 0:
        return []
    if len(lst) == 1:
        return [lst]
    l = []  # empty list that will store current permutation
    for ia in range(len(lst)):
        m = lst[ia]
        remLst = lst[:ia] + lst[ia + 1:]
        for pa in permutation(remLst):
            l.append([m] + pa)
    return l


data = list(AA)
for p in permutation(data):
    print(p)
