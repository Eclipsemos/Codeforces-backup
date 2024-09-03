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
        int pivot = nums[r];
        int fast  = l;
        int slow = l;
        while(fast<r)
        {
            if(nums[fast]<pivot)
            {
                swap(nums[fast], nums[slow]);
                slow++;
            }
            fast++;
        }
        swap(nums[slow],nums[r]);
        return slow;
    }

    void qsort(vector<int>& nums, int l, int r) 
    {
        if(l>=r)
            return;
        int index = my_partition(l, r, nums);
        qsort(nums, l,index-1);
        qsort(nums, index+1, r);

        return;
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