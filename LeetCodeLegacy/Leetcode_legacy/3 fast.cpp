// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int ans = 0;
        int curr = 0;
        unordered_map<char,int> mp;
        for (int i = 0; i < n; i++)
        {
            while(mp[s[i]]>0)
            {
                mp[s[curr]]--;
                curr++;
            }
            ans = max(ans,i-curr+1);
            mp[s[i]]++;
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    S.lengthOfLongestSubstring("pwwkew");
    return 0;
}
