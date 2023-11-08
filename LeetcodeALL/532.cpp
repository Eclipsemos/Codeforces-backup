// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        int n = nums.size();
        int ans = 0;
        unordered_map<int, int> mp1;
        map<set<int>,int> used;
        for (int i = 0; i < n; i++)
        {
            if (mp1.count(nums[i] - k) )
            {
                set<int> s1; s1.insert(nums[i] - k); s1.insert(nums[i]);
                
                if(!used.count(s1))
                {
                    ans += mp1[nums[i] - k];
                    used[s1]++;
                }
            }
            if(mp1.count(k + nums[i]))
            {
                set<int> s2; s2.insert(nums[i] + k); s2.insert(nums[i]);
                if(!used.count(s2))
                {
                    ans += mp1[k + nums[i]];
                    used[s2]++;
                }
            }
            mp1[nums[i]]=1;
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={1,2,3,4,5};
    S.findPairs(v,1);
    return 0;
}
