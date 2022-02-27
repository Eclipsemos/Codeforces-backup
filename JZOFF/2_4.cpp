// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
           mp[nums[i]]++;
        }
        for(auto& x:mp)
        {
            if(x.second==1)
             return x;
        }
        return 0;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
