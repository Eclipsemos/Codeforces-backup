// Eclipsemos UWMADISON CS 2022
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
        int l = 0, r= nums.size()-1;
        while(l<r)
        {
            int m = (l+r)>>1;
            if(nums[m]>nums[m+1])
            {
                r  = m;
            }
            else
            {
                l = m + 1;
            }
        }
        return r ;
    }
};
//
int main()
{
    Solution S;
    vc v = {1,3,2,1};
    cout<<S.findPeakElement(v);
    return 0;
}
