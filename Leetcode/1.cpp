#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
             mp[nums[i]]=i;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(target-nums[i])!=0&&i!=mp[target-nums[i]])
            {
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v = {3,2,4};
    vc ans = S.twoSum(v,6);
    for(auto& it:ans)
     cout<<it<<endl;
    return 0;
}
