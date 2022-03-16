// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int digArtifacts(int n, vector<vector<int>> &artifacts, vector<vector<int>> &dig)
    {
        int ans = 0;
        map<pair<int, int>, int> mp;
        map<int, int> mp2;
        int n1 = artifacts.size();
        for (int i = 0; i < n1; i++)
        {
            int r1 =artifacts[i][0];
            int c1 = artifacts[i][1];
            int r2 = artifacts[i][2];
            int c2 = artifacts[i][3];
            mp2[i] = (r2-r1+1)*(c2-c1+1);
            for(int j=r1;j<=r2;j++)
             for(int k=c1;k<=c2;k++)
             {
                pair<int,int> now = {j,k};
                mp[now]=i;
             }
        }
        int m = dig.size();
        for(int i=0;i<m;i++)
        {
            pair<int,int> now = {dig[i][0],dig[i][1]};
            if(!mp.count(now))
             continue;
            mp2[mp[now]]--;
            if(mp2[mp[now]]==0)
             ans++;
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vector<vector<int>> v;
    vector<vector<int>> d;
    vc v1 ={0,0,0,0};
    vc v2 = {0,1,1,1};
    vc v3 = {0,0};
    vc v4 = {0,1};
    v.push_back(v1);
    v.push_back(v2);
    d.push_back(v3);
    d.push_back(v4);
    S.digArtifacts(2,v,d);
    return 0;
}
