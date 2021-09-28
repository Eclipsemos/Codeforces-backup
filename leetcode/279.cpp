#include <bits/stdc++.h>
using namespace std;
//

class Solution
{
public:
    int numSquares(int n)
    {
        //dp[i]=min(dp[i],dp[i-j*j]+1)
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)
        {
            dp[i]=i;
            for(int j=1;j*j<=i;j++)
            {
                dp[i]=min(dp[i],dp[i-j*j]+1);
            }
        }
        return dp[n];
    }
};

int main()
{
    Solution S;
    return 0;
}