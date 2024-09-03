// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int maxSumAfterOperation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp1(n, 0);
        vector<int> dp2(n, 0);
        dp1[0] = nums[0];
        dp2[0] = nums[0]*nums[0];
        int ans = dp2[0];
        for (int i = 1; i < n; i++)
        {
            dp1[i] = max(nums[i], dp1[i - 1] + nums[i]);
            dp2[i] = max(nums[i]*nums[i],max(dp1[i-1]+nums[i]*nums[i],dp2[i-1]+nums[i]));
            ans = max(ans,dp2[i]);
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={2,-1,-4,-3};
    cout<<S.maxSumAfterOperation(v);
    return 0;
}
