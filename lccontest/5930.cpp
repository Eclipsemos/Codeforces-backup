// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int maxDistance(vector<int> &colors)
    {
        int ans=0;
        int n = colors.size();
        for(int i=0;i<n-1;i++)
        {
            int curr=0;
            for(int j=i+1;j<n;j++)
            {
                if(colors[j]!=colors[i])
                {
                    curr = max(curr,j-i);
                }
            }
            ans = max(ans,curr);
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
