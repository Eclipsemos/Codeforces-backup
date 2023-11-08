// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minimumDeleteSum(string s1, string s2)
    {
        int dp[1001][1001];
        memset(dp, 0, sizeof(dp));
        int n1 = s1.size();
        int n2 = s2.size();
        s1 = 'x' + s1;
        s2 = 'x' + s2;
        dp[1][1] = (s1[1] == s2[1]) ? s1[1] : 0;
        for (int i = 1; i <= n1; i++)
        {
            for (int j = 1; j <= n2; j++)
            {
                if (s1[i] == s2[j])
                {
                    dp[i][j] = dp[i - 1][j - 1] + s1[i];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int asc1 = 0, asc2 = 0;
        int ans_asc = 0;
        for (int i = 1; i <= n1; i++)
            asc1 += s1[i];
        for (int i = 1; i <= n2; i++)
            asc2 += s2[i];

        // FIND LCS
        return asc1+asc2-2*dp[n1][n2];
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    cout<<S.minimumDeleteSum("delete", "leet");
    return 0;
}
