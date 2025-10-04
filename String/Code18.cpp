#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    string s = "Shahriar";

    string p = s;
    transform(p.begin(), p.end(), p.begin(), ::toupper);

    p.erase(remove(p.begin(), p.end(), 'A'), p.end());

    cout << p << endl;

    return 0;
}