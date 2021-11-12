// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    bool dp[17][17];
    vector<vector<string>> ans;
    map<string, int> mp;
    vector<vector<string>> partition(string s)
    {
        memset(dp, true, sizeof(dp));
        for (int i = s.size() - 1; i >= 0; i--)
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                if (i != s.size() - 1 && j != 0)
                    dp[i][j] = (s[i] == s[j]) && (dp[i + 1][j - 1]);
            }
        }
        for (int i = 0; i < s.size() ; i++)
        {
            for (int j = 0; j < s.size() ; j++)
            {
                if (i <= j)
                {
                    string curr = s.substr(i, j - i + 1);
                    if (dp[i][j])
                        mp[curr] = 1;
                    else
                      mp[curr]=0;
                }
            }
        }
        vector<string> str;
        dfs(str, s);
        // for (int i = 0; i < s.size(); i++)
        //     for (int j = 0; j < s.size(); j++)
        //         cout << i << " " << j << ":" << dp[i][j] << endl;
        return ans;
    }

    void dfs(vector<string> str, string curr)
    {
        if (curr.size() == 0)
        {
            ans.push_back(str);
            return;
        }
        for (int i = 1; i <= curr.size(); i++)
        {
            string add =  curr.substr(0, i);
            if(mp[add]==1)
            {
                 str.push_back(add);
            if (curr.size() == add.size())
                dfs(str, "");
            else
            {
                string left = curr.substr(i, curr.size() - add.size());
                dfs(str, left);
            }
            str.pop_back();
            }
           
        }
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    S.partition("aab");
    return 0;
}
