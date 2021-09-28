#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int maxh=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i<=maxh)
             maxh=max(nums[i]+i,maxh);
        }
        if(maxh>=nums.size()-1)
         return true;
        return false;
    }
};
//
int main()
{
    Solution S;
    vc v ={3,2,1,0,4};
    cout<<S.canJump(v);
    return 0;
}
