#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int findNumberOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n, 0);
        int maxd = 0;
        map<int, int> mp;
        vector<int> cnt(n, 1);
        for (int i = 0; i < n; i++)
        {
            dp[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (nums[i] > nums[j])
                {
                    if(dp[j]+1>dp[i])
                    {
                        dp[i]=dp[j]+1;
                        cnt[i]=cnt[j];
                    }
                    else if(dp[j]+1==dp[i])
                    {
                        cnt[i]+=cnt[j];
                    }
                }
            }
            mp[dp[i]]++;
        }
        maxd = *max_element(dp.begin(),dp.end());
        int ans = 0;
        if (maxd == 1)
            return n;
        for(int i=0;i<n;i++)
        {
            if(dp[i]==maxd)
            {
                ans+=cnt[i];
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v = {1, 2, 4, 3, 5, 4, 7, 2};
    cout << S.findNumberOfLIS(v);
    return 0;
}
