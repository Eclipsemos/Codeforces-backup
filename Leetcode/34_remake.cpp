// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int doit(vector<int> &nums, int target, bool left)
    {
        int l = 0;
        int r = nums.size()-1;
        int ans = -1;
        while(l<=r)
        {
            int m = l + (r-l)/2;//avoid overflow
            if(nums[m]==target)
            {
                ans = m;
                if(left)
                {
                    r = m-1;
                }
                else
                {
                    l = m+1;
                }
            }
            else if(nums[m]<target)
            {
                l = m+1;
            }
            else
                r = m-1;
        }
        return ans;
    }


    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans = {-1,-1};
        int ans1 = doit(nums, target, true);
        int ans2 = doit(nums, target, false);
        if(nums.empty()||(ans1==-1&&ans2==-1))
            return {-1,-1};
        return {ans1,ans2};
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    return 0;
}
