#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
 
  pair<int,int>p;

  p.first=2;
  p.second=3;

  cout<<p.first<<" "<<p.second<<endl;


  pair<string,int>r;

  r.first="Shahriar";
  r.second=242;

  cout<<r.first<<" "<<r.second<<endl;


  pair<string,vector<int>>i;

  i.first="Rifat";
  i.second={1,2,3,4};

  cout<<i.first<<" ";

  for(auto x : i.second)
  {
    cout<<x<<endl;
  }


  pair<int,int>j;

  j=make_pair(2,3);

  cout<<j.first<<" "<<j.second<<endl;


  pair<int ,int>k1,k2;

  k1={3,5};
  k2={1,9};

pair<int,int> k_max = max(k1,k2);
pair<int,int> k_min = min(k1,k2);


cout<<k_max.first<<" "<<k_max.second<<endl;
cout<<k_min.first<<" "<<k_min.second<<endl;



              
              
    return 0; 
}