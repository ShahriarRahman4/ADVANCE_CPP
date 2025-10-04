#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
  int t;
  cin>>t;
  for(int i = 1 ;i<=t;i++)
  {
    int m,n;
    cin>>n>>m;

    map<pair<int,int>,bool>x;
    bool done =1;

    while(m--)
    {
        int a,b;
        cin>>a>>b;

        if(x[{a,b}])
        {
            done=0;
        }
        else
        {
            x[{a,b}]=1;
        }
    }

    if(done==1)
    {
        cout<<"Scenario #"<<i<<": possible"<<endl;
    }
    else
    {
        cout<<"Scenario #"<<i<<": impossible"<<endl;
    }
    

  }
              
              
              
    return 0; 
}