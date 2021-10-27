// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minDeletions(string s)
    {
        map<char, int> mp;
        map<int,int> help;
        int flag=0;
        for (char c : s)
        {
            mp[c]++;
        }
        vector<int> deal;
        for(auto& x:mp)
        {
            deal.push_back(x.second);
        }
        sort(deal.begin(),deal.end());
        for(int it:deal)
        {
            if(help[it])
            {
                flag=1;
            }
            help[it]++;
        }
        if(!flag)
         return 0;
        int min =0;
        int res=0;
        for(int i=0;i<deal.size();i++)
        {
            if(help[deal[i]]>1)
            {
                help[deal[i]]--;
                int cur;
                for(int j=1;deal[i]-j>=0;j++)
                {
                     cur = deal[i]-j;
                    if(help[deal[i]-j]==0)
                    {
                        min=deal[i]-j;
                        break;
                    }
                }
                res+=deal[i]-min;
                help[cur]++;
            }
            
        }
        return res;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
     cout<<S.minDeletions("jbddhjemmnhaflahionjoddojoliimdcailihfdleahgbafnknblkheeicoonffenhhmgfhgmnjk");
    return 0;
}
