#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxForm(vector<string> &strs, int m, int n)
    {
        //dp[i][j][k]means in [0,i]: Max for j-0 & k-1
        int len = strs.size();
        int dp[len+1][m+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=len;i++)
        {
            string curr = strs[i-1];
            int c0=0; int c1=0;
            for(int s=0;s<curr.size();s++)
            {
                if(curr[s]=='1')
                 c1++;
                else c0++;
            }

            for(int j=0;j<=m;j++)
             for(int k=0;k<=n;k++)
             {
                 if(j-c0>=0&&k-c1>=0)
                 dp[i][j][k] = max(dp[i-1][j][k],dp[i-1][j-c0][k-c1]+1);
                 else
                 {
                     dp[i][j][k] = dp[i-1][j][k];
                 }
                 
             }
        }

        return dp[len][m][n];
    }
};

int main()
{
    vector<string> s1={"10","0","1"};
    Solution S;
    cout<<S.findMaxForm(s1,1,1);
    return 0;
}