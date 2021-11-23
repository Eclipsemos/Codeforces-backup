// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        if(nums.size()<2)
         return false;
        vector<int> prefix;
        int curr=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            curr=(curr+nums[i])%k;
            prefix.emplace_back(curr);
            if(mp.count(curr))
            {
                if(i-mp[curr]>=2)
                {
                    return true;
                }
            }
            else
             mp[curr]=i;
        }
        return false;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
