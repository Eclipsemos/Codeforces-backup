// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        int dp[1091][1091];
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < n; i++)
            dp[i][i] = 1;
        int startx = 0;
        int maxlen = 1;
        for(int len = 2; len<=n;len++)
        {
            for(int i=0;i<n;i++)
            {
              int j = i + len -1;
              if(j>=n)
                break;
              if(s[i]!=s[j])
              {
                dp[i][j] = 0;
              }  
              else
              {
                if(j-i<3)
                {
                    dp[i][j] = 1;
                }
                else
                {
                    dp[i][j] = dp[i+1][j-1];
                }
              }
              if(dp[i][j]&&j-i+1>maxlen)
              {
                startx = i;
                maxlen = j-i+1;
              }
            }
        }
        return s.substr(startx,maxlen);
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
