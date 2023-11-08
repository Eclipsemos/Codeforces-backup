#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0, r = nums.size()-1;
        if(r==0)
        {
            return (target==nums[r])?0:-1;
        }
        while(l<r)
        {
            int m = (l+r)/2;
            if(nums[m]==target)
            {
                return m;
            }
            else if(nums[m]<target)
            {
                l = m+1;
            }
            else
            {
                r = m;
            }
        }
        return -1;
    }
};
//
int main()
{
    Solution S;
    vc nums = {5};
    cout << S.search(nums, 5) << endl;
    return 0;
}
