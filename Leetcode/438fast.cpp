// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> ans;
        vector<int> ms(26);
        vector<int> mp(26);
        if (s.size() < p.size())
            return ans;
        for(int i=0;i<p.size();i++)
        {
            ms[s[i]-'a']++;
            mp[p[i]-'a']++;
        }
        if(ms==mp)
         ans.push_back(0);
        for(int i=0;i<s.size()-p.size();i++)
        {
            --ms[s[i]-'a'];
            ++ms[s[i+p.size()]-'a'];
            if(ms==mp)
            ans.push_back(i+1);
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    S.findAnagrams("cbaebabacd","abc");
    return 0;
}
