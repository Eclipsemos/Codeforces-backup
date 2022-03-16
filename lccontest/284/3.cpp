// Xinyun Ye UWMADISON CS 2021 寄！
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int maximumTop(vector<int> &nums, int k)
    {
        int del=nums[0];
        vector<int> dp(k+1,-1);
        int n = nums.size();
        if(n==1&&k==1)
         return -1;
        dp[1] = nums[1];
        del = max(del,nums[1]);
        dp[2] = max(del,nums[2]);
        int ans = max(dp[1],dp[2]);
        for(int i=3;i<=k;i++)
        {
            if(i>=n)
            {
                if(k-n>1)
                 return ans;
                else
                 return dp[i-2];
                break;
            }
            dp[i]=max(del,nums[i]);
            dp[i]=max(dp[i],dp[i-2]);
            del = max(del,nums[i]);
            ans = max(ans,dp[i]);
        }
        return dp[k];
    }
};
//
int main()
{
    Solution S;
    vc v={5,2,2,4,0,6};
    S.maximumTop(v,6);

    return 0;
}
