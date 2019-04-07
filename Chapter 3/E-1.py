__author__ = 'Darshan Kokare'
"""
Exercise 3.5
1. 
 a. j= 1, 3, 10, 30, 100
 b. j=−1,−3,−10,−30,−100
 c. j= 1, 1/3, 1/10, 1/30, 1/100
 d. j=−1,−1/3,−1/10,−1/30,−1/100
 
 All the above represent norms of vectors infinite dimensional linear spaces (of dimension 5). The vector component 
 values have been taken as 2, 3, 4, 5, and 6.If j increases in the positive direction the larger magnitude gets more 
 weight;eventually as j tends to infinity only the largest magnitude prevails. As j de-creases from one, difference in 
 contributions from components become less pronounced; in the limit as j tends to zero, all components are given 
 equal weight. For negative values of j smaller magnitudes prevail over the larger ones with behavior characteristics as 
 above. Choice of j helps to focus on selected characteristics of spaces 
"""
j = [1, 3, 10, 30, 100, -1, -3, -10, -30, -100, 1, 1 / 3, 1 / 10, 1 / 30, 1 / 100, -1, -1 / 3, -1 / 10, -1 / 30, -1 / 100]
counter = -1
for j_ in j:
    counter += 1
    sum_ = sum(abs(i) ** j_ for i in range(2, 7))
    sum_ = sum_ ** (1 / j_)
    if counter >= 4:
        counter = 0
        print(sum_, end=', ')
        print('')
    else:
        print(sum_, end=', ')
