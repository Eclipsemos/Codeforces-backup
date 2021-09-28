#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> ans;
    map<int,int> mp;
    vector<string> permutation(string s)
    {
        if(s.size()==0)
         return ans;
        else if (s.size()==1)
         {
             ans.push_back(s);
             return ans;
         };
         dfs(0,s,"");
         set<string> ans_check(ans.begin(),ans.end());
         ans.assign(ans_check.begin(),ans_check.end());
         return ans;
    }
    void dfs(int index, string s,string curr)
    {
        if(curr.size()==s.size())
         {
             ans.push_back(curr);
              return;
         }
         for(int i=0;i<s.size();i++)
         {
             if(mp[i]!=1)
             {
             mp[i]=1;
             curr+=s[i];
             dfs(i+1,s,curr);
             curr = curr.substr(0,curr.length()-1);
             mp[i]=0;
             }
         }
    }
};

int main()
{
    Solution S;
    string input = "abc";
    S.permutation(input);
    return 0;
}
