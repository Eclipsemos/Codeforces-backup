// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<int> getAverages(vector<int> &nums, int k)
    {
        vector<int> ans;
        vector<int> pre;
        int curr = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            curr += nums[i];
            pre.push_back(curr);
        }
        for (int i = 0; i < n; i++)
        {
            if (i-k >= 0 && i+k < n )
            {
                int pre1 = i - k;
                int pre2 = i + k;
                int v = 0;
                if (pre1 == 0)
                {
                    v = pre[pre2];
                }
                else
                    v = pre[pre2] - pre[pre1 - 1];
                ans.push_back(v/(k*2+1));
            }
            else
                ans.push_back(-1);
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={7,4,3,9,1,8,5,2,6};
    S.getAverages(v,3);

    return 0;
}
