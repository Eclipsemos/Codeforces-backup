// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minSteps(string s, string t)
    {
        map<int, int> mp1, mp2;
        for (char c : s)
            mp1[c]++;
        for (char c : t)
            mp2[c]++;
        if (mp1 == mp2)
        {
            return 0;
        }
        int ans=0;
        for(auto x:mp1)
        {
            if(x.second>mp2[x.first])
            {
                ans+=x.second-mp2[x.first];
                mp2[x.first] = x.second;
            }
        }
        for(auto x:mp2)
        {
            if(x.second>mp1[x.first])
            {
                ans+=x.second-mp1[x.first];
                mp1[x.first] = x.second;
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
