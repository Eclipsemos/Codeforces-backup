#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int dp[1001];
        memset(dp,0,sizeof(dp));
        int n = cost.size();
        for(int i=2;i<=n;i++)
        {
            dp[i]=min(dp[i-2]+cost[i-2],dp[i-1]+cost[i-1]);
        }
        return dp[n];
    }
};
//
int main()
{
    Solution S;
    vector<int> arr = {10,15,20};
    S.minCostClimbingStairs(arr);
    return 0;
}
