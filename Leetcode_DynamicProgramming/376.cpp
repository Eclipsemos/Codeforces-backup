// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int wiggleMaxLength(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp1(n, 1);
        vector<int> dp2(n, 1);
        int last1 = nums[0];
        int last2 = nums[0];
        int ans=1;
        for (int i = 1; i < n; i++)
        {
            if(nums[i]>nums[i-1])
            {
                dp1[i]=max(dp2[i-1]+1,dp1[i-1]);
                dp2[i]=dp2[i-1];
            }
            else if(nums[i]<nums[i-1])
            {
               dp2[i]=max(dp1[i-1]+1,dp2[i-1]);
               dp1[i]=dp1[i-1];
            }
            else
            {
                dp1[i]=dp1[i-1];
                dp2[i]=dp2[i-1];
            }
           
            ans = max(ans,max(dp1[i],dp2[i]));
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={1,17,5,10,13,15,10,5,16,8};
    S.wiggleMaxLength(v);
    return 0;
}
