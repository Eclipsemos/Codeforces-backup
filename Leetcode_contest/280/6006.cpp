// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    long long minimumRemoval(vector<int> &beans)
    {
        sort(beans.begin(), beans.end());
        vector<int> pref;
        int curr = 0;
        int n = beans.size();
        for (int i = 0; i < n; i++)
        {
            curr += beans[i];
            pref.push_back(curr);
        }
        int ans = 100000001;
        for (int i = 0; i < n; i++)
        {
            int cost = pref[n - 1] - pref[i] - (n - i-1) * beans[i]+pref[i]-beans[i];
            ans = min(ans,cost);
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v={63,43,12,94};
    S.minimumRemoval(v);
    return 0;
}
