//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        map<vector<int>, int> mp;
        int n = nums.size();
        int sum = 0;
        for (int i1 = 0; i1 < n - 3; ++i1)
        {
            if(i1!=0&&nums[i1]==nums[i1-1])
             continue;
            if (((long long)nums[i1] +(long long) nums[i1 + 1] +(long long) nums[i1 + 2] +(long long)nums[i1 + 3]) > (long long)target)
                break;
             if (nums[i1] + nums[n - 3] + nums[n - 2] + nums[n -1 ] < target)
                 continue;
            for (int i2 = i1 + 1; i2 < n - 2; ++i2)
            {
                if(i2>i1+1&&nums[i2]==nums[i2-1])
                 continue;
                if ((nums[i1] + nums[i2] + nums[i2 + 1] + nums[i2 + 2]) > target)
                    break;
                 if ((nums[i1] + nums[n-3] + nums[n - 2] + nums[n - 1]) < target)
                     continue;
                int l = i2 + 1;
                int r = n - 1;
                while (l < r)
                {
                    long long now = nums[i1] + nums[i2] + nums[l] + nums[r];
                    
                    if (now == target)
                    {
                        vector<int> curr = {nums[i1], nums[i2], nums[l], nums[r]};
                        if (mp[curr] != 1)
                        {
                            ans.push_back(curr);
                            mp[curr] = 1;
                        }
                    }
                    if (now < target)
                    {
                        l++;
                    }
                    else
                    {
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v = {1, 0, -1, 0, -2, 2, 0};
    S.fourSum(v, 0);

    return 0;
}
