// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int bulbSwitch(int n)
    {
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            double now = i;
            double v = sqrt(now);
            v*=floor(sqrt(now));
            if(v==now)
            {
                ans++;
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
S.bulbSwitch(12);
    return 0;
}
