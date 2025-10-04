#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
 
  int n;
  cin>>n;

  set<int>x;

  for(int i = 0 ; i<n ;i++)
  {
    int p;
    cin>>p;
    x.insert(p);
  }

 if(x.size()==1)
 {
    cout<<"NO"<<endl;
 }
 else
 {
    int p,c=0;
    for(auto u : x)
    {
        if(c==3)
        {
            break;
        }
        p=u;
        c++;
    }
     cout<<p<<endl;
 }


              
              
    return 0; 
}