//Eclipsemos UWMADISON CS 2023
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size);
        int l = 0, r = size -1;
        int index = size-1;
        while(l<=r)
        {
            if(nums[l]*nums[l]<nums[r]*nums[r])
            {
                ans[index--] = nums[r]*nums[r];
                r--;
            }
            else
            {
                ans[index--] = nums[l]*nums[l];
                l++;
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
   //vc v={-5,-3,-2,-1};
   vc v = {-4,-1,0,3,10};
   S.sortedSquares(v);
    return 0;
 }
