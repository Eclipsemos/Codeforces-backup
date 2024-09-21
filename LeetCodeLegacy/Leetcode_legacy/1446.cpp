// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int maxPower(string s)
    {
        map<char,int> mp;
        int ans=1;
        mp[s[0]]++;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            mp[s[i]]++;
            else
            mp[s[i]]=1;
            ans=max(ans,mp[s[i]]);
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
