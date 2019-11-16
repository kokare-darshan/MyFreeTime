#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> list ;
    vector<int>::iterator lower_bound_;
    int size, a,b,c,d;

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> a;
        list.push_back(a);
    }
    cin >> b;
    for (int i =0; i < b; i++)
    {
        cin >> c;
        lower_bound_ = lower_bound(list.begin(), list.end(), c);
        d = (lower_bound_ - list.begin()) + 1;
        if (c == list[d-1])
            cout << "Yes ";
        else
            cout << "No ";
        cout << d  << endl;
    }
    return 0;
}
