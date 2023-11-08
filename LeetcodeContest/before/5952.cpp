// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int countPoints(string rings)
    {
        map<int,set<char>> mp;
        int ans=0;
        for(int i=0;i<rings.size();i=i+2)
        {
            mp[rings[i+1]].insert(rings[i]);
        }
        for(auto& x:mp)
        {
            if(x.second.find('R')!=x.second.end()
            &&x.second.find('B')!=x.second.end()
            &&x.second.find('G')!=x.second.end())
            ans++;
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
