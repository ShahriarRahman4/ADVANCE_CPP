#include <bits/stdc++.h>
using namespace std;

#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c == 'y')
    {
        return true;
    }
    return false;
}

int main()
{
    optimize();

    string s;
    string ans;
    cin >> s;
    char c;
    for (auto x : s)
    {
        c = tolower(x);
        if (!isVowel(c))
        {
            ans += '.';
            ans += c;
        }
    }

    cout << ans << endl;

    return 0;
}