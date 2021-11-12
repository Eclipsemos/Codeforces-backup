// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int numPairsDivisibleBy60(vector<int> &time)
    {
        int ans = 0;
        map<int, int> mp;
        for (int i = 0; i < time.size(); i++)
        {
            if(time[i]%60!=0)
             time[i] = time[i] % 60;
            else
             time[i]=60;
            mp[time[i]]++;
        }
        for (int i = 0; i < time.size(); i++)
        {
            int now = time[i];
            int next;
            if(now==60)
             next=60;
            else
             next=60-now;
            if(next==60||next==30)
            {
                ans+=(mp[next]-1)*mp[next]/2;
            }
            else
            ans+=mp[now]*mp[next];
            mp[now]=0;
            mp[next]=0;
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v = {20,40};
    cout << S.numPairsDivisibleBy60(v);
    return 0;
}
