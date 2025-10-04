#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 

bool cnd(const pair<int,int>&p1,const pair<int,int>&p2)
{
    if(p1.first>p2.first)
    {
      return 1 ;
    }
    else if(p1.first==p2.first)
    {
        if(p1.second<p2.second)
        {
            return 1;
        }
        return 0;
    }
    else
    {
        return 0;
    }
}
              
int main() {
  optimize(); 
 
  int n,k;
  cin>>n>>k;

  vector<pair<int,int>>arr(n);

  for(int i =0 ;i<n ;i++)
  {
    cin>>arr[i].first>>arr[i].second;
  }

  sort(arr.begin(),arr.end(),cnd);
  int count=0;

 

  for(auto  u : arr)
  {
    if(u==arr[k-1])
    {
       count++;
    }
  }

  cout<<count<<endl;
              
              
    return 0; 
}