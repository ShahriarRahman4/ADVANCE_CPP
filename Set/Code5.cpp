#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
 
  set<string>s;

  s.insert("shahriar");
  s.insert("proma");
  s.insert("momo");
  s.insert("nobel");
  s.insert("srety");
  s.insert("shahriar");
    s.insert("proma");
  s.insert("momo");
  s.insert("nobel");
  s.insert("srety");

  cout<<s.size()<<endl;

  for(auto x : s)
  {
    cout<<x<<endl;
  }

              
              
    return 0; 
}