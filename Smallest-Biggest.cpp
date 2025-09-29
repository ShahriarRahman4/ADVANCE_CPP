#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num[]={5,15,22,1,-15,-24};
    int size=6;
    int smallest =INT_MAX;
    int largest=INT_MIN;

    for(int  i =0 ;i<size ;i++)
    {
        // if(num[i]<smallest)
        // {
        //     smallest=num[i];
        // }

        smallest=min(num[i],smallest);
        largest=max(num[i],largest);


    }
    cout<<"Smallest = "<<smallest<<endl;
    cout<<"Largest = "<<largest<<endl;
    return 0;
}