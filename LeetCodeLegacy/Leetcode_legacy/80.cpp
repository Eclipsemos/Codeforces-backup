#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int length = 0;
        map<int, int> mp;
        map<int, int> used;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if(mp[nums[i]]&&used[nums[i]]!=1)
            {
                if(mp[nums[i]]>=2)
                 {
                     length+=2;
                     ans.push_back(nums[i]);
                     ans.push_back(nums[i]);
                 }
                 else
                 {
                     length+=1;
                     ans.push_back(nums[i]);
                 }
                 used[nums[i]]=1;
            }
        }
        nums = ans;
        return length;
    }
};

int main()
{
    Solution S;
    vector<int> v = {1, 1, 1, 2, 2, 3};
    S.removeDuplicates(v);
    return 0;
}