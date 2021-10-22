//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int cnt;
    int dis[10][10];
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int orangesRotting(vector<vector<int>> &grid)
    {
        queue<pair<int, int>> Q;
        memset(dis, -1, sizeof(dis));
        cnt = 0;
        int n = grid.size(), m = grid[0].size(), minstep = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 2)
                {
                    Q.push(make_pair(i, j));
                    dis[i][j] = 0;
                }
                else if (grid[i][j] == 1)
                    cnt += 1;
            }
        while (!Q.empty())
        {
            pair<int, int> x = Q.front();
            Q.pop();
            for (int i = 0; i < 4; i++)
            {
                int cx = x.first + dx[i];
                int cy = x.second + dy[i];
                if (cx < 0 || cx >= n || cy < 0 || cy >= m || ~dis[cx][cy] || !grid[cx][cy])
                    continue;
                dis[cx][cy] = dis[x.first][x.second] + 1;
                Q.push(make_pair(cx, cy));
                if (grid[cx][cy] == 1)
                {
                    cnt -= 1;
                    minstep = dis[cx][cy];
                    if (!cnt)
                        break;
                }
            }
        }
        return cnt ? -1 : minstep;
    }
};
//
int main()
{
    Solution S;
    vc v1 = {0, 1, 1, 2};
    vc v2 = {2, 0};
    vc v3 = {1, 2};
    vector<vector<int>> vr;
    vr.push_back(v1);
    vr.push_back(v2);
    vr.push_back(v3);
    cout << S.orangesRotting(vr);
    return 0;
}
