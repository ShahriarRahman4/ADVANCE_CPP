#include<bits/stdc++.h>
using namespace std;
              
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n' 
              
int main() {

    int n1,n2;
    cin>>n1>>n2;
    map<string,string> ipName;

    for(int i = 0 ;i<n1 ;i++)
    {
        string name,ip;
        cin>>name>>ip;
       ipName[ip]=name;
    }

    while(n2--)
    {
        string n,ip;
        cin>>n>>ip;

        ip.pop_back();

        cout<<n<<" "<<ip<<"; #"<<ipName[ip]<<endl;
    }
  
                         
    return 0; 
}