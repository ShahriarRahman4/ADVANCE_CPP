#include<iostream>
using namespace std;

int minTwo(int a ,int b)
{
    if(a<b)
        {
        return a;
        }
        else
        {
            return b;
        }
}

int main()
{
   cout<<"min = "<<minTwo(5,2)<<endl;
   return 0;
}