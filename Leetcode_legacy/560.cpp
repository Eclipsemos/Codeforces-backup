// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        int pref[20005];
        pref[0] = nums[0];
      
        map<int, int> mp;
        mp[0]++;
        mp[nums[0]]++;
        for(int i=1;i<n;i++)
        {
            pref[i] = nums[i]+pref[i-1];
            if(mp.count(pref[i]-k)!=0)
            {
                ans+=mp[pref[i]-k];
            }
            mp[pref[i]]++;
        }

        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={1,1,1};
    S.subarraySum(v,2);
    return 0;
}
