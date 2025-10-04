#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;

    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }

        arr.push_back(n);

    }

    for(auto  x : arr)
    {
        cout<< x << " ";
    }

    return 0;
}