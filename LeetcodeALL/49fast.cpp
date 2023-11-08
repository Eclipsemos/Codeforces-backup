//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for (auto &str : strs)
        {
            string s  = str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);
        }
        for(auto& k:mp)
        {
            ans.push_back(k.second);
        }

        return ans;
    }
};
//
int main()
{
    Solution S;
    //vc v={};
    vector<string> v = {"eat", "tea", "tan", "ate", "nat", "bat"};
    S.groupAnagrams(v);
    return 0;
}
