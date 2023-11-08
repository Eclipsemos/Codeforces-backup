// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int l = 0, r = nums.size()-1;
        while(l<r)
        {
            int m  = (r-l)/2+l;
            m -= m&1;
            if(nums[m]==nums[m+1])
            {
                l = m+2;
            }
            else
            {
                r = m;
            }
        }
        return nums[l];
    }
};
//
int main()
{
    Solution S;
    vc v={1,1,2,3,3,4,4,8,8};
    S.singleNonDuplicate(v);

    return 0;
}
