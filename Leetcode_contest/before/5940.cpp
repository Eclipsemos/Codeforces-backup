// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minimumDeletions(vector<int> &nums)
    {
        int maxi = 0;
        int mini = 0;
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            if (nums[i] > nums[maxi])
                maxi = i;
            if (nums[i] < nums[mini])
                mini = i;
        }
        int ans = n*2;
        ans = min(ans,max(maxi,mini)+1);
        ans = min(ans,n-min(mini,maxi));
        ans = min(ans,min(maxi,mini)+1+n-max(maxi,mini));
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={-14,61,29,-18,59,13,-67,-16,55,-57,7,74};
    S.minimumDeletions(v);

    return 0;
}
