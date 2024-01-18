// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    bool doit(string s1, string s2)
    {
        if(s2.size()>s1.size())
         return false;
        for(int i=0;i<s2.size();i++)
        {
            if(s1[i]!=s2[i])
             return false;
        }
        return true;
    }
    int prefixCount(vector<string> &words, string pref)
    {
        int ans = 0;
        for(string s:words)
        {
            if(doit(s,pref))
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
