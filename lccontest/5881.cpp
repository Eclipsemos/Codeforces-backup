#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int maximumDifference(vector<int> &nums)
    {
        int minn=nums[0];
        int maxd=-1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>minn)
             maxd = max(maxd,nums[i]-minn);
            minn = min(minn,nums[i]);
        }

        return maxd;
    }
};
//
int main()
{
    Solution S;

    return 0;
}
