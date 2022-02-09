// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int countKDifference(vector<int> &nums, int k)
    {
        int n = nums.size();
        int ans = 0;
        unordered_map<int, int> mp1;
        
        for (int i=0;i<n;i++)
        {
            if(mp1.count(nums[i]-k)||mp1.count(k+nums[i]))
            {
                ans+=mp1[nums[i]-k];
                ans+=mp1[k+nums[i]];
            }
            mp1[nums[i]]++;
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={1,2,2,1};
    cout<<S.countKDifference(v,1);
    return 0;
}
