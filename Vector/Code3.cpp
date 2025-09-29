#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout<<"After push back size :"<<vec.size()<<endl;

    vec.pop_back();

    for(int val : vec)
    {
        cout<<val<<endl;
    }

    cout<<endl;

    cout<<"Front value :"<<vec.front()<<endl;
    cout<<"Back value :"<<vec.back()<<endl;
    cout<<"index value :"<<vec.at(1)<<endl;


    return 0;
}