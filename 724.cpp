// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        vector<int> pre;
        int pr = 0;
        int ans = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            pr += nums[i];
            pre.emplace_back(pr);
        }
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            int left;
            int right;
            if (i == 0)
            {
                left = 0;
                right = pre[n - 1] - pre[0];
            }
            else if (i == n - 1)
            {
                left = pre[n - 1] - nums[n - 1];
                right = 0;
            }
            else
            {
                left = pre[i - 1];
                right = pre[n - 1] - pre[i];
            }

            if (left == right)
            {
                ans = i;
                break;
            }
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
