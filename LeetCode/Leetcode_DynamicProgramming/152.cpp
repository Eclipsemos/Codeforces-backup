// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        int dp[20001][2];
        dp[0][0] = nums[0];
        dp[0][1] = nums[0];
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            dp[i][0] = max(nums[i], max(dp[i - 1][0] * nums[i], dp[i - 1][1] * nums[i]));
            dp[i][1] = min(nums[i], min(dp[i - 1][1] * nums[i], dp[i - 1][0] * nums[i]));
            ans = max(ans,dp[i][0]);
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={2,3,-2,4};
    S.maxProduct(v);
    return 0;
}
