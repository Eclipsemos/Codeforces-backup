// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minMaxGame(vector<int> &nums)
    {
        int ans = 0;
        int n  = nums.size();
        vector<int> arr;
        while(n>1)
        {
            n = n/2;
            for(int i=0;i<n;i++)
            {
                if(i%2)
                arr.push_back(max(nums[2*i],nums[2*i+1]));
                else
                arr.push_back(min(nums[2*i],nums[2*i+1]));
            }
            nums.clear();
            nums = arr;
            arr.clear();
            n =  nums.size();
        }
        return nums[0];
    }
};
//
int main()
{
    Solution S;
    vc v={3};
    S.minMaxGame(v);
    return 0;
}
