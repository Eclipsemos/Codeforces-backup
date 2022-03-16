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
        int l = 0;
        int m = p.size();
        int n = s.size();
        unordered_map<char, int> mp;
        for (char c : p)
            mp[c]++;
        unordered_map<char, int> now;
        string str = "";
        for (int r = 0; r < n; r++)
        {
            if (str.size() == m)
            {
                if (now == mp)
                    ans.push_back(l);
            }
            str += s[r];
            now[s[r]]++;
            if (str.size() > m)
            {
                now[str[0]]--;
                if (now[str[0]] == 0)
                    now.erase(str[0]);
                str = str.substr(1, m);
                l++;
            }
        }
        if (str.size() == m)
            {
                if (now == mp)
                    ans.push_back(l);
            }
        return ans;
    }
};
//
int main()
{
    Solution S;
    S.findAnagrams("abab", "ab");

    return 0;
}
