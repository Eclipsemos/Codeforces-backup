//Nick Ye @UIUC CS 2025'
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:

    int my_partition(int l, int r,vector<int>& nums)
    {
        int partition_index = r;
        int s = l;
        int f = l;
        while(f<r)
        {
            if(nums[f]<nums[partition_index])
            {
                swap(nums[f],nums[s]);
                s++;
            }
            f++;
        }
        swap(nums[s],nums[r]);
        // [l,s-1] s [s+1, r-1]
        return s;

    }

    void qsort(vector<int>& nums, int l, int r) 
    {
        if(l>=r)
            return;
        int index = my_partition(l, r, nums);
        qsort(nums,l, index-1);
        qsort(nums,index+1, r);
    }
};
//
int main()
{
    Solution S;
    vc v={5,1,2,36,8,9};
    S.qsort(v, 0, 5);
    return 0;
 }
