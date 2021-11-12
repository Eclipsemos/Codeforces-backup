// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int maxEvents(vector<vector<int>> &events)
    {
        int maxday = 0;
        unordered_map<int, vector<int>> mp;
        for (vector<int> &eve : events)
        {
            maxday = max(maxday, eve[1]);
            mp[eve[1]].push_back(eve[0]);
        }
        int res = 0;
        priority_queue<int, vector<int>, greater<int>> q;
        for (int i = 1; i <= maxday; ++i)
        {
            if (mp.count(i))
            {
                for (int day : mp[i])
                {
                    q.push(day);
                }
            }
            //
            while (!q.empty() && q.top() < i)
            {
                q.pop();
            }
            if(!q.empty())
            {
                q.pop();
                ++res;
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

    return 0;
}
