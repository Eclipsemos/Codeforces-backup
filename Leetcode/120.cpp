// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -10001));
        dp[0][0] = triangle[0][0];
        for (int i = 0; i < n - 1; i++)
        {
            int m = triangle[i].size();
            for (int j = 0; j < m; j++)
            {
                // dp[i][j] -> dp[i+1][j] & dp[i+1][j+1]
                if (dp[i + 1][j] == -10001)
                {
                    dp[i + 1][j] = dp[i][j] + triangle[i + 1][j];
                }
                else
                {
                    dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + triangle[i + 1][j]);
                }

                if (dp[i + 1][j + 1] == -10001)
                {
                    dp[i + 1][j + 1] = dp[i][j] + triangle[i + 1][j + 1];
                }
                else
                {
                    dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + triangle[i + 1][j + 1]);
                }
            }
        }
        int ans = 10001;
        for(int i=0;i<dp[n-1].size();i++)
        {
            ans = min(ans,dp[n-1][i]);
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v1 = {-10};
   
    vector<vector<int>> vs{v1};
    cout<<S.minimumTotal(vs);
    return 0;
}
