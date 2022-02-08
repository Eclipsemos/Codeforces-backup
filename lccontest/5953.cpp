// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    long long subArrayRanges(vector<int> &nums)
    {
        long long ans = 0;
        int dp1[101][101];
        int dp2[101][101];
        memset(dp1, 0, sizeof(dp1));
        memset(dp2, 0, sizeof(dp2));
        dp1[0][0] = nums[0];
        dp2[0][0] = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            dp1[i][i]=nums[i];
            dp2[i][i]=nums[i];
        }
        for (int i = 0; i < nums.size() - 1; i++)
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] > dp1[i][j - 1])
                    dp1[i][j] = nums[j];
                else
                    dp1[i][j] = dp1[i][j - 1];

                if (nums[j] < dp2[i][j - 1])
                    dp2[i][j] = nums[j];
                else
                    dp2[i][j] = dp2[i][j - 1];
            }
        for (int i = 0; i < nums.size() - 1; i++)
            for (int j = i; j < nums.size(); j++)
                ans += (dp1[i][j] - dp2[i][j]);
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v = {1, 2, 3};
    S.subArrayRanges(v);
    return 0;
}
