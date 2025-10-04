#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
 optimize(); 
 int n;
 cin>>n;


 vector<string>s(n);
 map<string,bool>m;

 while(n--)
 {
    string s;
    cin>>s;

    if(m[s]==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    m[s]=1;
 }
              
              
    return 0; 
}