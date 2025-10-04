#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr = {2, 3, 5, 5, 7, 7, 1};
    sort(arr.begin(), arr.end());

    int sz = unique(arr.begin(), arr.end()) - arr.begin();
    cout << sz << endl;

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}