#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={6,3,12,2,4,5,1};

    int ans_idx = max_element(arr.begin(),arr.end())-arr.begin();
     
    cout<<ans_idx<<endl;

    int ans = *max_element(arr.begin(),arr.end());

    cout<<ans<<endl;


    int ans2_idx=min_element(arr.begin(),arr.end())-arr.begin();
    cout<<ans2_idx<<endl;


    int ans2=*min_element(arr.begin(),arr.end());

    cout<<ans2<<endl;
    
    return 0;
}