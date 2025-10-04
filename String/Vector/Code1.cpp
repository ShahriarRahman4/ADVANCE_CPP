#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a={2,1,4,6,8,9};

    cout<< *max_element(a.begin(),a.end())<<endl;
    cout<< max_element(a.begin(),a.end())-a.begin()<<endl;


    return 0;
}

