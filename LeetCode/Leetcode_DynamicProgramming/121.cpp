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
        int n = prices.size();
        int minx = 10001;
        vector<int> dp(n,0);
        dp[0] = prices[0];
        int ans =0;
        for (int i = 1; i < n; i++)
        {
            dp[i] = dp[i-1];
            dp[i] = min(dp[i], prices[i]);
        }
        for (int i = 1; i < n; i++)
        {
            int curr = prices[i]-dp[i-1];
            ans = max(ans,curr);
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={1,2,3,4,5,7};
    S.maxProfit(v);

    return 0;
}
