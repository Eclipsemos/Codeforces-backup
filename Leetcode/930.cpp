// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        unordered_map<int,int> mp;
        mp[0]=1;
        int curr=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            if(mp.count(curr-goal))
              ans+=mp[curr-goal];
            mp[curr]++;
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
