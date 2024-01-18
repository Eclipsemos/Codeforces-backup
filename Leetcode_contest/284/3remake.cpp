//Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int maximumTop(vector<int> &nums, int k)
    {
        int n = nums.size();
        
        if (k==0) return nums[0];
        if (n==1)
            if(k&1) return -1;
            else
            return 0;
        int mx = nums[0];
        for(int x:nums) mx=max(mx,x);
        if(k>n) return mx;
        int t=0;
        for(int i=0;i<k-1;i++)
         t = max(t,nums[i]);
        if(k<n) t = max(t,nums[k]);
        return t;
    }
};
//
int main()
{
    Solution S;
   //vc v={};

    return 0;
 }
