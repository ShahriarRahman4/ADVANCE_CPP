#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
              
 set<int> s ={1,1,3,3,2,2};
 
 s.clear();

 cout<<s.empty()<<endl;

 s.insert(2);
 s.insert(2);
 s.insert(3);
 s.insert(1);
 s.insert(1);

 cout<<s.size()<<endl;

 for(auto u : s)
 {
    cout<<u<<" "<<endl;
 }


 cout<<s.count(2)<<endl;


 cout<<*s.begin()<<endl;

 cout<<*(--s.end())<<endl;
 cout<<*(s.rbegin())<<endl;

              
    return 0; 
}