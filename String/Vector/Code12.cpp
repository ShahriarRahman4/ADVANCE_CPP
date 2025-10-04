#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 4, 5, 6, 7, 8, 9};

    cout << v.back() << endl;

    v.pop_back();

    cout << v.back() << endl;

    v.erase(v.begin());

    cout << v.front() << endl;


    for(auto  x : v)
    {
        cout<<x<<endl;
    }


    return 0;
}