// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans;
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        int index = -1;
        while (l < r)
        {
            int curr = (l + r) / 2;
            if (nums[curr] < target)
                l = curr + 1;
            else if (nums[curr] > target)
                r = curr - 1;
            else
            {
                index = curr;
                break;
            }
        }
        if (index == -1)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int pr=index;
        int br=index;
        while(pr>=0&&nums[pr]==target)
         pr--;
        while(br<n&&nums[br]==target)
         br++;
        ans.push_back(pr+1);
        ans.push_back(br-1);
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
