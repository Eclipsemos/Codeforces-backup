// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minSubArrayLen(int s, vector<int> &nums)
    {
        int n = nums.size();
        if (n==0)
         return 0;
        int start =0, end =0;
        int sum =0;
        int ans = INT_MAX;
        while( end < n )
        {
            sum += nums[end];
            while (sum >= s)
            {
                ans = min(ans, end-start+1);
                sum -= nums[start];
                start++;
            }
            end++;
        }
        return ans==INT_MAX?0:ans;
    }
};
//
int main()
{
    Solution S;
    vc v = {2,3,1,2,4,3};
    cout << S.minSubArrayLen(7, v);
    return 0;
}
