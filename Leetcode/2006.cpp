// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int countKDifference(vector<int> &nums, int k)
    {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] - nums[j] == k || nums[j] - nums[i] == k)
                    ans++;
            }
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
