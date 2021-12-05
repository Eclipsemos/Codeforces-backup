// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        vector<int> dp(n+1,0);
        dp[0]=nums[0];
        dp[1]=max(nums[1],nums[0]);
        for(int i=2;i<n;i++)
        {
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    }
};
//
int main()
{
    Solution S;
    vc v={2,7,9,3,1};
    S.rob(v);
    return 0;
}
