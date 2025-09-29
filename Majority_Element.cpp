#include <bits/stdc++.h>
using namespace std;

int majorityFound(vector<int> nums)
{
    int size = nums.size();

    for (int val : nums)
    {
        int freq = 0;

        for (int el : nums)
        {
            if (el == val)
            {
                freq++;
            }
        }

        if (freq > size / 2)
        {
            return val;
        }
    }

    
    return -1;
}

int main()
{
    vector<int> nums = {2, 7, 11, 11, 11, 15};

    int ans = majorityFound(nums);
    if (ans != -1)
        cout << ans << endl;
    else
        cout << "No majority element" << endl;

    return 0;
}
