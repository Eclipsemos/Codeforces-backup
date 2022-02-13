// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int ans, n, m;
    vector<vector<int>> map;
    int used[501][501];

    void dfs(int x, int y, vector<vector<int>> &grid)
    {
        grid[x][y] = 0;
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx == n || ny < 0 || ny == m || !grid[nx][ny])
                continue;
            if (used[nx][ny] != 1)
            {
                used[nx][ny] = 1;
                dfs(nx, ny, grid);
                used[nx][ny] = 0;
            }
        }
    }

    int numEnclaves(vector<vector<int>> &grid)
    {
        n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1 && (i == 0 || i == n - 1 || j == 0 || j == m - 1))
                {
                    used[i][j] = 1;
                    dfs(i, j, grid);
                    used[i][j] = 0;
                }
            }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (grid[i][j] == 1)
                {
                    ans++;
                }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v1 = {0, 1, 1, 0};
    vc v2 = {0, 0, 1, 0};
    vc v3 = {0, 0, 1, 0};
    vc v4 = {0, 0, 0, 0};
    vector<vc> v;
    v = {v1, v2, v3, v4};
    S.numEnclaves(v);
    return 0;
}
