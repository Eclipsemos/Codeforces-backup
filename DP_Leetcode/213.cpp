// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n);
        if (n <= 1)
            return nums[0];
        if (n <= 2)
            return max(nums[0], nums[1]);
        // dp 0 n-2
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n-1; i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        int ans1 = dp[n - 2];
        int ans2 = 0;
        // start with n-1
        vector<int> dp1(n+1);
        dp1[1] = nums[1];
        dp1[2] = max(nums[1],nums[2]);
        for (int i = 3; i < n; i++)
        {
            dp1[i] = max(dp1[i - 1], dp1[i - 2] + nums[i]);
        }
        ans2 = max(dp[n-2],dp1[n-1]);
        return ans2;
    }
};
//
int main()
{
    Solution S;
    vc v={1,3,1,3,100};
    S.rob(v);
    return 0;
}
