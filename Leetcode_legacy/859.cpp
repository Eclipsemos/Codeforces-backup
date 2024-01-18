// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    bool buddyStrings(string s, string goal)
    {
        if (s.size() != goal.size())
            return false;
        if(s==goal)
        {
            map<char,int> mp;
            for(auto& c:s)
            {
                if(mp[c]==1)
                {
                    return true;
                }
                mp[c]++;
            }
            return false;
        }
        set<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=goal[i])
            {
                st.insert(s[i]);
            }
        }
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=goal[i])
            {
                if(flag==2)
                 return false;
                if(st.find(goal[i])!=st.end())
                {
                    st.erase(goal[i]);
                    flag++;
                }
                else
                return false;
            }
        }
        return true;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
