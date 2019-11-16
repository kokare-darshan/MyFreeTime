#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int size, b, c,d;
   std::vector<int> list;
   std::vector<int>::iterator it;
   cin >> size;
   list.reserve(size);
   for (int temp,i = 0 ;   i < size ; i++)
    {   cin >> temp;
         list.push_back(temp);
    }
    
    cin >> b;
    it = list.begin();
    list.erase(it + (b-1));
    
    cin >> c >> d;
    list.erase(list.begin()+(c -1), list.begin()+(d -1));

    cout << list.size() <<endl;
    for (it = list.begin(); it < list.end(); it++)
        cout << *it << " ";

    return 0;
}
