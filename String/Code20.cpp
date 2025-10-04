#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
 
  vector<string>v;

  v.push_back("Shahriar");
  v.push_back("Rahman");
  v.push_back("Rifat");
  v.push_back("Shahriar");
  v.push_back("Rahman");
  v.push_back("Rifat");

  sort(v.begin(),v.end());

  int sz=unique(v.begin(),v.end())-v.begin();

  for(int i = 0 ; i<sz ;i++)
  {
    cout<<v[i]<<endl;
  }


              
              
    return 0; 
}