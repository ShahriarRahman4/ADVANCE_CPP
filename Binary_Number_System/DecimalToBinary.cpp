#include<iostream>
using namespace std;

int decToBinary(int decNum)
{
    int ans = 0,pow=1;

    while(decNum>0)
    {
        int rem = decNum %2;
        decNum=decNum/2;

        ans=ans+(rem*pow);
        pow=pow*10;
    }
    return ans;
}


int binaryToDecimal(int binNum)
{
    int ans =0 , pow =1;
    while(binNum>0)
    {
        int rem = binNum%2;
        ans+=rem*pow;

        binNum/=10;
        pow*=2;
    }

    return ans;
}

int main()
{
    int decNum =10;

    for(int i =0 ;i<=decNum ;i++)
    {
        cout<<decToBinary(i)<<endl;
    }

    cout<<binaryToDecimal(1101)<<endl;
}