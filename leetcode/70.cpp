#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int climbStairs(int n)
    {
        int dp[10001];
        ;
        memset(dp, sizeof(dp), 0);
        dp[1] = 1;
        dp[2] = 2;
        if (n <= 2)
            return n;
        for (int i = 3; i <= n; i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }

        return dp[n];
    }
};
//
int main()
{
    Solution S;

    return 0;
}
