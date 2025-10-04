#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    vector<int> arr = {1, 1, 2, 2, 3, 3, 5};

    int n = unique(arr.begin(), arr.end()) - arr.begin();

    cout << n;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}