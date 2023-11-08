#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int l = 0;
        int n = nums.size();
        int r = n - 1;
        int dl = nums[l], dr = nums[r];
        while (l<n||r>=0)
        {
            if (nums[l] >= dl)
            {
                dl = nums[l];
            }
            else
            {
                return l-1;
            }

            if(nums[r]>=dr)
            {
                dr = nums[r];
            }
            else
            {
                return r+1;
            }
            
            r--;
            l++;
        }

        return 0;
    }
};
//
int main()
{
    Solution S;
    vc v = {1,2,3,1};
    cout<<S.findPeakElement(v);
    return 0;
}
