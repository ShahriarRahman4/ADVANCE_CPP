#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
 
  int n;
  cin>>n;
  vector<pair<string,string>>x(n);
  for(int i = 0 ; i<n ;i++)
  {
     cin>>x[i].first>>x[i].second;
  }

  sort(x.begin(),x.end());

  int sz = unique(x.begin(),x.end())-x.begin();

  cout<<sz<<endl;

              
              
    return 0; 
}