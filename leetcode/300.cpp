#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        //
        int res = 0;
        for(int i=0;i<n;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                 dp[i] = max(dp[i],dp[j]+1);
            }
        }
        for(int i=0;i<n;i++)
         res = max(res,dp[i]);
        return res;
    }
};
//
int main()
{
    Solution S;
    vc v  ={10,9,2,5,3,7,101,18};
    cout<<S.lengthOfLIS(v);
    return 0;
}
