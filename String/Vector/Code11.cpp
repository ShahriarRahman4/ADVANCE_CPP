#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int>arr={5,2,1,3,4,11,14,12,78,32};

    reverse(arr.begin(),arr.end());



    for(auto  x : arr)
    {
        cout<<x <<" ";
    }




    return 0;
}