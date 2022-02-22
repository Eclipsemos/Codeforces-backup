// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int maxProfit(vector<int> &prices, int fee)
    {
        int dp[10][2];
        memset(dp, 0, sizeof(dp));
        int n = prices.size();
        dp[0][0] = 0;
        dp[0][1] = 0-prices[0];
        for (int i = 1; i < n; i++)
        {
            dp[i][0]=max(dp[i-1][0],dp[i-1][1]+prices[i]);//没有股票=max(不动，卖出);
            dp[i][1]=max(dp[i-1][1],dp[i-1][0]-prices[i]-fee);//有股票=max(不动，买入);
        }
        return dp[n-1][0];
    }
};
//
int main()
{
    Solution S;
    vc v={1,3,7,5,10,3};
    S.maxProfit(v,3);

    return 0;
}
