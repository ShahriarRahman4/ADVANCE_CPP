#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
              
 
  vector<int>v={1,1,2,3,5,7,7,7};
  map<long long,int>count;

  for(int i= 0 ;i <v.size() ;i++ )
  {
    count[v[i]]++;
  }

  cout<<count[7]<<endl;
              
    return 0; 
}