// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<string> num = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    void dfs(string str, int index, string curr)
    {
        if (index == str.size())
        {
            ans.push_back(curr);
            return;
        }
        int v = str[index]-'0'-2;
        for(int i=0;i<num[v].size();i++)
        {
            dfs(str,index+1,curr+num[v][i]);
        }
    }
    vector<string> letterCombinations(string digits)
    {
        ans.clear();
        if(digits.size()==0)
         return ans;
        string comb = "";
        dfs(digits, 0, comb);
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    S.letterCombinations("23");
    return 0;
}
