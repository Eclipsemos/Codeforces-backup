// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<int> arrayChange(vector<int> &nums, vector<vector<int>> &operations)
    {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]] = i;
        for(int i=0;i<operations.size();i++)
        {
            int prev = operations[i][0];
            int after = operations[i][1];
            int index = mp[prev];
            mp[after] = index;
            nums[mp[after]] = after;
        }
        return nums;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
