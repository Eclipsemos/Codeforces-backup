//Eclipsemos UWMADISON CS 2023
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int l = 0, r = nums.size() - 1;
        while(l<=r)
        {
            int m = l + (r-l)/2;
            if(nums[m]==target)
            {
                return m;
            }
            else if(nums[m]<target)
            {
                l = m +1;
            }
            else 
            {
                r = m-1;
            }
        }
        return l;
    }
};
//
int main()
{
    Solution S;
    //vc v={};

    return 0;
 }
