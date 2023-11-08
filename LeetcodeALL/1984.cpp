// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minimumDifference(vector<int> &nums, int k)
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
         int ans = nums[n-1]-nums[0];
        for(int i=0;i<n-k+1;i++)
        {
            ans = min(ans,nums[i+k-1]-nums[i]);
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={41900,69441,94407,37498,20299,10856,36221,2231,54526,79072,84309,76765,92282,13401,44698,17586,98455,47895,98889,65298,32271,23801,83153,12186,7453,79460,67209,54576,87785,47738,40750,31265,77990,93502,50364,75098,11712,80013,24193,35209,56300,85735,3590,24858,6780,50086,87549,7413,90444,12284,44970,39274,81201,43353,75808,14508,17389,10313,90055,43102,18659,20802,70315,48843,12273,78876,36638,17051,20478};
    S.minimumDifference(v,5);
    return 0;
}
