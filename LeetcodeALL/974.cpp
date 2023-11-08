// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        vector<int> pre;
        int ans=0;
        map<int,int> mp;
        int prefix=0;
        for(int i=0;i<nums.size();i++)
        {
            prefix+=nums[i];
            pre.emplace_back(prefix);
            if(mp.count(prefix%k))
            {
                ans+=prefix%k;
            }
            mp[prefix%k]++;
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v = {4, 5, 0, -2, -3, 1};
    S.subarraysDivByK(v, 5);

    return 0;
}
