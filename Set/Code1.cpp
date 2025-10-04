#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
              
 
  set<int> s ={ 1,1,3,3,2,2};

  cout<<s.size()<<endl;
  for(auto x : s )
  {
    cout<<x<<" ";
  }
              
    return 0; 
}