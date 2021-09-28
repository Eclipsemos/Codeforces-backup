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
        int n = nums.size();
        int dp[401];
        memset(dp,0,sizeof(dp));
        dp[0]=nums[0];
        dp[1]=max(nums[1],nums[0]);
        for(int i=2;i<n;i++)
        {
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }
        return dp[n-1];
    }
};
//
int main()
{
    Solution S;
    vc arr = {2,1,1,2};
    cout<<S.rob(arr);
    return 0;
}
