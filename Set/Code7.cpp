#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
 
   set<pair<int,int>,greater<pair<int,int>>>s;

   s.insert({1,2});
   s.insert({2,3});
   s.insert({4,2});


   for(auto u : s)
   {
    cout<<u.first<<","<<u.second<<endl;
   }

 
              
              
    return 0; 
}