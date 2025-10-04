#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
 
  map<string,int>id;

  id["Shahriar"]=1;
  id["momo"]=3;
  id["Sharif"]=5;
  id["prety"]=6;
  id["dima"]=9;


  for(auto u : id)
  {
    cout<<u.first<<" "<<u.second<<endl;
  }
              
              
    return 0; 
}