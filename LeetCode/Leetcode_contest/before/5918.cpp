// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int ans = 0;
    map<string,int> track;
    map<string,int> book;
    bool ok(string str)
    {
        if(str.size()<5)
         return false;
        map<char, int> mp;
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u')
            return false;
            mp[str[i]]++;
        }
        if (mp['a'] == 0 || mp['e'] == 0 || mp['i'] == 0 || mp['o'] == 0 || mp['u'] == 0)
        {
            return false;
        }
        return true;
    }
    void dfs(string curr, string left)
    {
        if(book[curr]==1)
         return;
        book[curr]=1;
        if (ok(curr))
        {
            if(track[curr]==1)
             return;
            else
             track[curr]=1;
         ans++;
         cout<<curr<<endl;
        }
           
        for (int i = 1; i <= left.size(); i++)
        {
            string add = left.substr(0, i);
            string next = left.substr(i, left.size() - add.size());
            dfs(add, next);
        }
    }
    int countVowelSubstrings(string word)
    {
        dfs("", word);
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    S.countVowelSubstrings("iooiuaioaaeoaoiauiuoeioeoueuaeuoeeeeeaiauiiioeouaiouaaiaeeuoeeoeeuuaaeuiueaeeeeiiooeuaoiuoeiooiuaoiu");
    return 0;
}
