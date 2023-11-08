#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        if (n == 2)
            return max(nums[0], nums[1]);
        if(n==3)
        {
            return max(max(nums[0],nums[1]),nums[2]);
        }
        int dp[n + 2];
        memset(dp, 0, sizeof(dp));
        //stole 0
        dp[0] = 0;
        dp[1] = nums[1];
        for (int i = 2; i <= n - 1; i++)
        {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }
        //stole n-1
        int rdp[n + 1];
        memset(rdp, 0, sizeof(rdp));
        rdp[n-1]=0;
        rdp[n-2]=nums[n-2];
        for(int i=n-3;i>=0;i--)
        {
           
            rdp[i]=max(rdp[i+2]+nums[i],rdp[i+1]);
          
        }

        cout<<"here"<<endl;
        return max(dp[n-1],rdp[0]);
    }
};
//
int main()
{
    Solution S;
    vc arr = {200,3,140,20,10};
    cout<<S.rob(arr);
    return 0;
}
