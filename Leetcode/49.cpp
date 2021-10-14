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
        unordered_map<int, vector<int>> mp;
        for (int i=0;i<strs.size();i++)
        {
            mp[i].resize(26);
            for (auto &c : strs[i])
                mp[i][c-'a']++;
        }
        //
        vector<int> book;
        book.resize(strs.size());
        for (int i = 0; i < strs.size(); i++)
        {
            if (book[i] != 1)
            {
                vector<string> curr;
                curr.push_back(strs[i]);
                book[i]=1;
                for (int j = i + 1; j < strs.size(); j++)
                {
                    if(mp[i]==mp[j])
                    {
                        book[j]=1;
                        curr.push_back(strs[j]);
                    }
                }
                ans.push_back(curr);
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vector<string> v={"tea","","eat","","tea",""};
    S.groupAnagrams(v);
    return 0;
}
