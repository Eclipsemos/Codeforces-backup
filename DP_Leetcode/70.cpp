// Xinyun Ye UWMADISON CS 2021
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
        int dp[50];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++) {
            dp[i] = dp[i-2]+dp[i-1];
        }
        return dp[n];
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
