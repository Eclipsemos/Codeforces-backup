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
        int flag = 0;
        for (char c : s)
        {
            mp[c]++;
        }
        vector<int> deal;
        int res=0;
        for (auto &x : mp)
        {
            deal.push_back(x.second);
        }
        sort(deal.rbegin(),deal.rend());
        for(int i=1;i<deal.size();i++)
        {
            while(deal[i]>0&&deal[i-1]<=deal[i])
            {
                deal[i]--;
                res++;
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
    S.minDeletions("aab");

    return 0;
}
