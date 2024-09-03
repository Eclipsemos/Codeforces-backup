#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int deleteAndEarn(vector<int> &nums)
    {
        int n = nums.size();
        if(n<1)
         return 0;
        int maxn=0;
        for(auto it:nums)
         maxn = max(maxn,it);
        vector<int> arr (maxn+1),dp(maxn+1);
    for(int it:nums)
       arr[it]++;
    dp[1]=arr[1];
    for(int i=2;i<=maxn;i++)
     {
         dp[i]=max(dp[i-1],dp[i-2]+arr[i]*i);
     }
     return dp[maxn];
    }
};
//
int main()
{
    Solution S;
    vc v = {3, 4, 2};
    cout << S.deleteAndEarn(v);
    return 0;
}
