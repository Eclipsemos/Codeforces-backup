#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int f[10001];
        int f1[10001];
        int even = 0;
        int sum = 1;
       
       
       
       
            f[0] = nums[0];
            f1[0] = nums[0];
            for (int i = 1; i < nums.size(); i++)
            {
                f[i] = max(f[i - 1] * nums[i], nums[i]);
                f[i] = max(f[i], f1[i - 1] * nums[i]);
                f1[i] = min(f1[i - 1] * nums[i], nums[i]);
                f1[i] = min(f1[i], f[i - 1] * nums[i]);
            }
       
        return *max_element(f,f+nums.size());
    }
};
//
int main()
{
    Solution S;
    vc v = {-2,0,-1};
    cout << S.maxProduct(v);
    return 0;
}
