//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        long long dp[amount+1];
        memset(dp,-1,sizeof(dp));
        dp[0]=0;
        for(int i=1;i<=amount;i++)
        {
            long long mins=amount;
            int flag=0;
            for(int j=0;j<coins.size();j++)
            {
                if(i-coins[j]>=0&&dp[i-coins[j]]!=-1)
                {
                    mins = min(mins,dp[i-coins[j]]);
                    flag=1;
                }
            }
            if(flag)
            dp[i]=mins+1;
        }
        return dp[amount];
    }
};
//
int main()
{
    Solution S;
    vc v={2};
    cout<<S.coinChange(v,3);

    return 0;
 }
