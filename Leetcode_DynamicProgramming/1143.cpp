// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        //dp[i][j]: maxLCS in (dp[i])
        int dp[1001][1001];
        memset(dp,0,sizeof(dp));
        int n1 = text1.size();
        int n2 = text2.size();
      
        for(int i=1;i<=n1;i++)
        {
            for(int j=1;j<=n2;j++)
            {
                if(text1[i-1]==text2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n1][n2];
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
