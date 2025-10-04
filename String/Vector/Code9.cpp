#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int>arr={5,2,1,3,4,11,14,12,78,32};

    sort(arr.begin(),arr.begin()+4);

    for(auto u : arr)
    {
        cout<<u<<endl;

    }


    cout<<endl;

    
    sort(arr.begin(),arr.end(),greater<int>());

    for(auto v : arr)
    {
        cout<<v<<endl;
    }






    return 0;
}
