// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int maxDepth(string s)
    {
        int ans = 0;
        int depth = 0;
        for (char c : s)
        {
            if (c == '(')
                depth++;
            else if (c == ')')
                depth--;
            else
            {
                ans = max(ans,depth);
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
