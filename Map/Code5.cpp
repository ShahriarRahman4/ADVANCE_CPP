#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
              
 map<int ,bool>vis;
 vector<int> v = {2,2,1,1,3};

 for(int u : v)
 {
    vis[u]=1;
 }

 for(auto x : vis )
  {
      cout<<x.first<<" "<<x.second<<endl;
  }
              
    return 0; 
}