#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
              
 
  int t;
  cin>>t;

  set<int>s;

  while(t--)
  {
    int type,x;
    cin>>type>>x;

    if(type==1)
    {
      s.insert(x);
    }
    else if(type==2)
    {
        s.erase(x);
    }
    else
    {
        if(s.count(x)==1)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
  }
              
    return 0; 
}