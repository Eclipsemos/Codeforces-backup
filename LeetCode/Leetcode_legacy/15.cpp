//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        map<vector<int>,int> mp;
        int n = nums.size();
        if(n<3)
        {
                return ans;
          
        }
        sort(nums.begin(),nums.end());
        for (int i = 0; i < n-2; i++)
        {
            if((nums[i]+nums[i+1]+nums[i+2])>0)
             break;
            if((nums[i]+nums[n-2]+nums[n-1]<0))
             continue;
            int l = i+1;
            int r = n-1;
            while(l<r)
            {
                int v = nums[i]+nums[l]+nums[r];
                if(v==0)
                {
                    vector<int> curr;
                    curr.emplace_back(nums[i]);curr.emplace_back(nums[l]);
                    curr.emplace_back(nums[r]);
                    if(mp[curr]!=1)
                    {
                        ans.push_back(curr);
                        mp[curr]=1;
                    }
                }
                if(v<0)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
      
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={0,0,0};
    S.threeSum(v);
    return 0;
}
