#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int maxSubarraySumCircular(vector<int> &nums)
    {

        int f[30001];
        memset(f, 0, sizeof(f));
        f[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            f[i] = max(nums[i], f[i - 1] + nums[i]);
        }
        int max1 = *max_element(f, f + nums.size());
        int f2[30001];
        memset(f2, 0, sizeof(f2));
        vector<int> nums2 = nums;
        f2[0] = nums2[0];
        for (int i = 1; i < nums2.size() - 1; i++)
        {
            f2[i] = min(nums2[i], f2[i - 1] + nums2[i]);
        }
        int max2 = *min_element(f2, f2 + nums2.size());
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];
        if (sum != max2)
        {
            if (sum - max2 > max1)
                return sum - max2;
            else
                return max1;
        }
        else
         return max1;
    }
};
//
int main()
{
    Solution S;
    vc v = {-2};
    cout << S.maxSubarraySumCircular(v);
    return 0;
}
