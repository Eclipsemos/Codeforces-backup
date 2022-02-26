// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    double probabilityOfHeads(vector<double> &prob, int target)
    {
        // use i -> j up
        int n = prob.size();
        double dp[1001][1001];
        memset(dp,0,sizeof(dp));
        dp[0][0] = 1;
        for(int i=1;i<=n;i++)
        {
            dp[i][0] = dp[i-1][0]*(1-prob[i-1]);
        }
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
               dp[i][j]=dp[i-1][j]*(1-prob[i-1])+dp[i-1][j-1]*prob[i-1];
            }
        }
        return dp[n][target];
    }
};
//
int main()
{
    Solution S;
    vector<double> v={0.5,0.5,0.5,0.5,0.5};
    S.probabilityOfHeads(v,0);
    return 0;
}
