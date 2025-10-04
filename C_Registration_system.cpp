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

    int t;
    cin >> t;

    map<string, int> ct;

    while (t--)
    {
        string s;
        cin >> s;

        if (ct[s] == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s << ct[s] << endl;
        }

        ct[s]++;
    }

    return 0;
}