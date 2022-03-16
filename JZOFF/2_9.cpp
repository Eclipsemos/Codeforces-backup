// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        int l = 0;
        int ans = 0;
        int n = nums.size();
        int sum = 1;
        if(k==0)
         return 0;
        for (int r = 0; r < n; r++)
        {
            sum *= nums[r];
            while(sum>=k&&l<=r)
            {
                sum/=nums[l];
                l++;
            }
            if(sum<k)
            {
                ans+=(r-l+1);
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v = {1,1, 1};
    cout<<S.numSubarrayProductLessThanK(v,1);
    return 0;
}
