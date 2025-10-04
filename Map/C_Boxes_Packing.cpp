#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {
  optimize(); 
 
  int n;
  cin>>n;

  vector<int>x(n);

  map<int,int>freq;

  for(int i =0 ;i<n ;i++)
  {
     cin>>x[i];
     freq[x[i]]++;
  }

  int max = 0;
  
  for(auto u : freq)
  {
    if(u.second>max)
    {
        max=u.second;
    }
  }


  cout<<max<<endl;
              
              
    return 0; 
}