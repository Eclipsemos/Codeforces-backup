#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n+1,-100001);
        dp[0] = max(nums[0], -100001);
        int mx=-100001;
        for (int i = 1; i < n; i++)
        {
            dp[i] = max(nums[i], dp[i - 1] + nums[i]);
            mx  = max(mx,dp[i]);
        }
        
        return mx;
    }
};
//
int main()
{
    Solution S;
    vc v = {-2,1,-3,4,-1,2,1,-5,4};
    cout << S.maxSubArray(v) << endl;
    return 0;
}
