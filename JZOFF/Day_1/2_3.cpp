// Eclipsemos UWMADISON CS 2023
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> dp(n+1);
        
        dp[0]=0;
        if(n==0)
            return dp;
        dp[1]=1;
        if(n==1)
            return dp;
        dp[2]=1;
        for(int i=3;i<=n;i++)
        {
            dp[i] = (i%2==0)?dp[i/2]:dp[i-1]+1;
        }
        return dp;
        
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    S.countBits(5);
    return 0;
}
