// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    string greatestLetter(string s)
    {
        string ans = "@";
        map<char, int> mp1;
        map<char, int> mp2;
        for (int i = 0; i < s.size(); i++)
        {
            char curr = s[i];
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                mp1[curr] = 1;
                if (mp2.count(curr))
                {
                    if (ans[0] < curr)
                    {
                        ans[0] = curr;
                    }
                }
            }
            else
            {
                curr -= 32;
                mp2[curr] = 1;
                if (mp1.count(curr))
                {
                    if (ans[0] < curr)
                    {
                        ans[0] = curr;
                    }
                }
            }
        }
        if (ans[0] == '@')
            return "";
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    cout<<S.greatestLetter("lEeTcOdE");
    return 0;
}
