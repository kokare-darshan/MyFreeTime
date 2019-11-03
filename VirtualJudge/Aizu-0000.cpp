/*
Write a program which prints multiplication tables in the following format:

1x1=1
1x2=2
.
.
9x8=72
9x9=81
Input
No input.

Output
1x1=1
1x2=2
.
.
9x8=72
9x9=81
*/

#include<iostream>
#include<string>

int main()
{
	for (int i = 1; i <=9; i++)
		for (int j = 1; j<=9; j++)
			std::cout << i << 'x' << j << '=' << i*j << std::endl;
	return 0;
}
