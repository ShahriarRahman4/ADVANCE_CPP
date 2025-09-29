#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="asgbcdabfijabfi";

    transform(s.begin(),s.end(),s.begin(),::toupper);

    cout<<s<<endl;

    string s1="HJGHGJHHKJ";

    transform(s1.begin(),s1.end(),s1.begin(),::tolower);

    cout<<s1<<endl;

    return 0;
}