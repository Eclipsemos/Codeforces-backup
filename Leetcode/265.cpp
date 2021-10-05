//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minCostII(vector<vector<int>> &costs)
    {
        int n = costs.size();
        int k = costs[0].size();
        int dp[n + 1][k + 1];
        memset(dp, 0, sizeof(dp));
        for(int j=0;j<k;j++)
        {
            dp[0][j]=costs[0][j];
        }
            
       
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j <= k; j++)
            {
                dp[i][j]=10000000;
                for(int z=0;z<k;z++)
                {
                    if(z!=j)
                    {
                        dp[i][j] = min (dp[i][j],dp[i-1][z]+costs[i][j]);
                    }
                }
            
            }
        }
        int ans = dp[n-1][0];
        for(int i=0;i<k;i++)
           ans = min(ans,dp[n-1][i]);
        return ans;
    }
};
//
int main()
{
    Solution S;
    //vc v={};

    return 0;
}
