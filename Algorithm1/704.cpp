//Eclipsemos UWMADISON CS 2023
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
// <= [1,2,3] < [1,2,3)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while(l<=r)
        {
            int m = (l+r)/2;
            cout<<l<<r<<endl;
            if(nums[m]==target)
                return m;
            else if(nums[m]<target)
            {
                l = m+1;
            }
            else
            {
                r = m-1;
            }
        }

        return -1;
    }
};
//
int main()
{
    Solution S;
    vc v={5};
    cout<<S.search(v,5)<<endl;
    return 0;
 }
