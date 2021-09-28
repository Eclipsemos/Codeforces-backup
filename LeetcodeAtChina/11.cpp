#include <bits/stdc++.h>
using namespace std;

////////////
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int l = 0;
        int r = height.size() - 1;
        int w = 0;
        int curr = 0;
        int h = 0;
        int ans = 0;
        while (l < r)
        {
            w = r - l;
            h = min(height[l], height[r]);
            curr = h * w;
            ans = max(ans, curr);
            if (height[l] <= height[r])
                l++;
            else
                r--;
        }
        return ans;
    }
};

int main()
{
    Solution S;
    vector<int> v = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    S.maxArea(v);
    return 0;
}