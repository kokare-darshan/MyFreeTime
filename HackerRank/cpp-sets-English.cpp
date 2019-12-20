#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    std::set<int> set_;
    cin >> size;
    for (int i = 0 ;i < size; i++)
    {
        int x , y;
        cin >> x >> y;
        switch(x)
        {
            case(1):
                set_.insert(y);
                break;
            case(2):
                set_.erase(y);
                break;
            case(3):
                if (set_.end() == set_.find(y))
                    cout << "No"<< endl;
                else
                    cout << "Yes\n";
                break;

        }
    }
    return 0;
}



