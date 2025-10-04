#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string,int> freq;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        freq[s]++;
    }

    string ans = " ";
    int maxFreq = 0;

    for (auto p : freq) {
        if (p.second > maxFreq) 
        {
            maxFreq = p.second;
            ans = p.first;
        }
    }

    cout << "Most frequent value: " << ans << " with count " << maxFreq << endl;

    return 0;
}
