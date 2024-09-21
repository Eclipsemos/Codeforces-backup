// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int largestSumAfterKNegations(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0 && k > 0)
            {
                k--;
                nums[i] *= -1;
            }
        }
        if(k%2)
        {
            sort(nums.begin(), nums.end());
            nums[0]*=-1;
        }
        int ans=0;
        for(int val:nums)
         ans+=val;
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
