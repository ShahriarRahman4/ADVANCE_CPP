#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "fffabcuuuuhfj";

    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    int ans = 'a';
    int maxf = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxf)
        {
            maxf = freq[i];
            ans = i + 'a'; 
        }
    }

    cout << maxf << endl;
    cout << ans << endl;

    return 0;
}