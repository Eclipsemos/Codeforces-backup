// Xinyun Ye UWMADISON CS 2021
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
        string ans = "";
        int n = s.size();
        if (n < 2)
            return s;
        int maxlen = 1;
        int begin = 0;
        int dp[10][10]; /// add to 1001
        for (int i = 0; i < n; i++)
            dp[i][i] = 1;

        for (int len = 2; len <= n; len++)
        {
            for (int i = 0; i < n; i++)
            {
                int j = i + len - 1;
                if (j >= n)
                    break;
                if (s[i] != s[j])
                {
                    dp[i][j] = 0;
                }
                else
                {
                    if (j - i < 3)
                        dp[i][j] = 1;
                    else
                        dp[i][j] = dp[i + 1][j - 1];
                }
                if (dp[i][j] && j - i + 1 > maxlen)
                {
                    maxlen = j-i+1;
                    begin = i;
                }
            }
        }
        return s.substr(begin,maxlen);
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
