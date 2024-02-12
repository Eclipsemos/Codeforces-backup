// Eclipsemos UWMADISON CS 2023
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int n = nums.size();
        vector<int> trans;
        trans.push_back(0);
        int m = pattern.size();
        int ans = 0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            {
                trans.push_back(1);
            }
            else if(nums[i]==nums[i-1])
            {
                trans.push_back(0);
            }
            else
                trans.push_back(-1);
        }
        int index= 1;
        while(index<=n-m)
        {
            if(pattern[0]==trans[index])
            {
                int flag = 0;
                for(int i=index;i<=index+m-1;i++)
                {
                    if(trans[i]!=pattern[i-index])
                    {
                        flag = 1;
                        break;
                    }
                }
                if(flag==0)
                {
                    ans++;
                }
            }
                index++;
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
