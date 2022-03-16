// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        map<vector<int>,int> m;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int last = 100001;
        for (int i = 0; i < n - 2; i++)
        {
            if (nums[i] == last)
            {
                continue;
            }
            int l = i + 1;
            int r = n - 1;
            while (l < r)
            {
                if (nums[l]+nums[r] == -1 * nums[i])
                {
                    ans.push_back(vector<int>{nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while(l<r&&nums[l] == nums[l-1])
                        l++;
                    while(l<r&&nums[r]==nums[r+1])
                        r--;
                }
                else if (nums[l]+nums[r]  < -1 * nums[i])
                {
                    l++;
                }
                else
                    r--;
            }
            last = nums[i];
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={-1,0,1,2,-1,-4};
    S.threeSum(v);

    return 0;
}
