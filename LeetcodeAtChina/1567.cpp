#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int getMaxLen(vector<int> &nums)
    {
        int f[100001];
        int f1[100001];
        f[0] = (nums[0] > 0) ? 1 : 0;
        f1[0] = (nums[0] < 0) ? 1 : 0;
        int n = nums.size();
        int flag = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] > 0)
            {
                f[i] = f[i - 1] + 1;
                if (f1[i - 1] != 0)
                    f1[i] = f1[i - 1] + 1;
                else
                    f1[i] = 0;
            }
            else if (nums[i] < 0)
            {
                f1[i] = f[i - 1] + 1;
                if (f1[i - 1] != 0)
                    f[i] = f1[i - 1] + 1;
                else
                    f[i] = 0;
            }
            else
            {
                f[i] = 0;
                f1[i] = 0;
            }
        }

        return *max_element(f, f + nums.size());
    }
};
//
int main()
{
    Solution S;
    vc v = {1, -2, -3, 4};
    cout << S.getMaxLen(v);
    return 0;
}
