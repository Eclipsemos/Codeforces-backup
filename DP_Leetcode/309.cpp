// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int dp[10][3];
        memset(dp, 0, sizeof(dp));
        int n = prices.size();
        dp[0][0] = 0-prices[0];
        for (int i = 1; i < n; i++)
        {
            dp[i][0]=max(dp[i-1][0],dp[i-1][2]-prices[i]);
            dp[i][1]=dp[i-1][0]+prices[i];
            dp[i][2]=max(dp[i-1][2],dp[i-1][1]);
        }
        return max(dp[n-1][1],dp[n-1][2]);
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
