#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findTargetSumWays(vector<int> &nums, int target)
    {
        int suma=0;
        for(int i=0;i<nums.size();i++)
         suma+=nums[i];
        ///
        int sp=(target+suma)/2;
        int dp[target+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        //dp[j]=dp[j]+dp[j-nums[i]]
        for(int i=0;i<nums.size();i++)
         for(int j=sp;j>=nums[i];j--)
         {
             dp[j]+=dp[j-nums[i]];
         }
        return dp[sp];
    }
};

int main()
{
    Solution S;
    return 0;
}