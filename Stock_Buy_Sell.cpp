#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>arr)
{
    int maxProfit=0 ; 
    int bestBuy=arr[0];

    for(int i = 1 ; i<arr.size() ;i++)
    {
        if(arr[i]>bestBuy)
        {
            maxProfit=max(maxProfit,arr[i]-bestBuy);
        }


        bestBuy=min(bestBuy,arr[i]);
    }

    return maxProfit;
}

int main()
{
    vector<int>arr={7,1,5,3,6,4};

    cout<<maxProfit(arr)<<endl;
}