// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<int> largestDivisibleSubset(vector<int> &nums)
    {
        vector<int> ans;
        int max_l = 1;
        sort(nums.begin(), nums.end());
        int dp[1002];
        for (int i = 0; i < nums.size(); i++)
        {
            dp[i] = 1;
        }
        int end=0;
        for (int i = 1; i < nums.size(); i++)
        {
            int curr = 0;
            for (int j = 0; j < i; j++)
            {
                if (nums[i] % nums[j] == 0)
                {
                    if (curr < dp[j])
                    {
                        curr = dp[j];
                    }
                }
            }
            dp[i] = curr + 1;
            if (dp[i] > max_l)
            {
                end = nums[i];
                max_l = dp[i];
            }
        }
        if(max_l==1)
        {
            ans.push_back(nums[0]);
            return ans;
        }
        
        for(int i=nums.size()-1;i>=0&&max_l>0;i--)
        {
            if(dp[i]==max_l&&end%nums[i]==0)
            {
                ans.push_back(nums[i]);
                end = nums[i];
                max_l--;
            }
        }
        return ans;

      
    }
};
//
int main()
{
    Solution S;
    vc v = {2, 3, 7, 5, 8, 9, 1, 6, 13, 52, 63, 92, 10242, 53257, 23512};
    S.largestDivisibleSubset(v);
    return 0;
}
