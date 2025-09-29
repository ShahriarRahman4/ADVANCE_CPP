// #include<iostream>
// using namespace std;

// void sumN(int n)
// {
//     int sum=0;

//     for(int i=1 ;i<=n ;i++)
//     {
//         sum+=i;
//     }
//     cout<<sum<<endl;
// }

// int main()
// {
//  sumN(5);
// }

#include<iostream>
using namespace std;

int sumN(int n)
{
    int sum=0;

    for(int i=1 ;i<=n ;i++)
    {
        sum+=i;
    }
    return sum;
    
}

int main()
{
 cout<<sumN(5)<<endl;
}
