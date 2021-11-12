// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        vector<int> pre;
        map<int,int> mp;
        int pr=0;
        mp[0]=1;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            pr+=nums[i];
            pre.push_back(pr);
            if(mp.count(pre[i]-k))
            {
                ans+=mp[pre[i]-k];
            }
            mp[pr]++;
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={1};
    S.subarraySum(v,1);
    return 0;
}
