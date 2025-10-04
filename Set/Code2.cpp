#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
 
  set<int> s ={1,1,3,3,2,2};

  set<int>:: iterator it;

  for(it=s.begin(); it!=s.end();it++)
  {
    cout<<*it<<" ";
  }
              
              
    return 0; 
}