#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
 
  multiset<int>s;
  s.insert(1);
  s.insert(1);
  s.insert(2);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(4);
  s.insert(5);
  s.insert(6);


  
   s.erase(1);


   auto it = s.find(2);
 
   s.era se(it);

  for(auto u : s)
  {
    cout<<u<<endl;
  }

 
              
              
    return 0; 
}