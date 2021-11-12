// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
vector<string> test1;
class Solution
{
public:
    vector<vector<string>> ans;
    map<vector<string>,int> mp;
    bool ok(string now)
    {
        for(char c:now)
        {
            if(c<'0'||c>'9')
            return false;
        }
        int val = atoi(now.c_str());
        if(val>255)
         return false;
        if(now.size()>1&&now[0]=='0')
         return false;
        return true;
    }
    void dfs(vector<string> curr, string left)
    {
        if(curr==test1)
         cout<<"here"<<endl;
        if(curr.size()>4)
         return;

        if (left.size() == 0)
        {
            if(curr.size()!=4)
             return;
            if(mp[curr]!=1)
            {
                mp[curr]=1;
            }
            else
             return;
            ans.push_back(curr);
            return;
        }
        for (int i = 1; i <= 3; i++)
        {
            string add = left.substr(0, i);
           
            if (ok(add))
            {
                curr.push_back(add);
                if (add.size() < left.size())
                {
                    string next = left.substr(i, left.size() - add.size());
                    
                    dfs(curr, next);
                }
                else
                {
                    dfs(curr,"");
                }
                curr.pop_back();
            }
        }
    }
    vector<string> restoreIpAddresses(string s)
    {
        vector<string> v1;
        dfs(v1, s);
        vector<string> v2;
        for(int i=0;i<ans.size();i++)
        {
            string curr="";
            for(int j=0;j<ans[i].size();j++)
            {
                if(j!=0)
                {
                    curr=curr+".";
                    
                }
                curr+=ans[i][j];
            }
            v2.push_back(curr);
        }
        return v2;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    test1.push_back("0");
    test1.push_back("100");
    test1.push_back("1");
    S.restoreIpAddresses("010010");
    return 0;
}
