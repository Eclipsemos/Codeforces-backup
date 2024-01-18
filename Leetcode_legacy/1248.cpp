// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        vector<int> pre;
        int prefix=0;
        map<int,int> mp;
        mp[0]=1;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
            {
                prefix+=1;
            }
            pre.emplace_back(prefix);
            if(mp.count(prefix-k))
             ans+=mp[prefix-k];
            mp[prefix]++;
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
