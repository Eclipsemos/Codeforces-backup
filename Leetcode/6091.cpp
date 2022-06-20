// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int partitionArray(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int ans = 1;
        int index = 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[index]>k)
            {
                ans++;
                index = i;
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v = {1,2,3};
    S.partitionArray(v, 1);
    return 0;
}
