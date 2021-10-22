//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        vector<vector<int>> ans;
        map<long long, vector<vector<int>>> mp;
        for (auto &p : points)
        {
            long long dis = p[0] * p[0] + p[1] * p[1];
            mp[dis].push_back(p);
        }
        int now = 1;
        for (auto &x : mp)
        {
            if (now <= k)
            {
                vector<vector<int>> v = x.second;
                for (int i = 0; i < v.size(); i++)
                {
                    ans.push_back(v[i]);
                    now++;
                }
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v = {};

    return 0;
}
