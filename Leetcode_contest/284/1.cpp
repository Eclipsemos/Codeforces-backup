// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<int> findKDistantIndices(vector<int> &nums, int key, int k)
    {
        vector<int> ans;
        int n = nums.size();
        map<int,int> mp;
        
        for (int i = 0; i < n; i++)
        {
            if(nums[i]==key)
            {  
                for(int j=i-k;j<=i+k;j++)
                {
                    if(j<0||j>=n)
                     continue;
                    mp[j]++;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(mp[i])
            ans.push_back(i);
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={3,4,9,1,3,9,5};
    S.findKDistantIndices(v,9,1);

    return 0;
}
