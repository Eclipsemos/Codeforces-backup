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
        dp[0] = nums[0];
        if (n == 1)
            return dp[0];
        dp[1] = max(nums[1],nums[0]);
        if (n == 2)
            return max(dp[0], dp[1]);
        for (int i = 2; i < n; i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        return dp[n - 1];
    }
};
//
int main()
{
    Solution S;
    vc v = {2,1,1,2};
    S.rob(v);

    return 0;
}
