// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    struct node
    {
        int x;
        int y;
        int c;
        node(int x, int y, int c) : x(x), y(y), c(c){};
        node() : x(0), y(0), c(0){};
    };

    vector<vector<int>> colorBorder(vector<vector<int>> &grid, int row, int col, int color)
    {
        vector<vector<int>> copy = grid;
        vector<vector<int>> ans = grid;
        vector<vector<int>> save =grid;
        queue<node> q;
        node start;
        start.x = row;
        start.y = col;
        start.c = color;
        int vis[51][51];
        q.push(start);
        int origin = grid[row][col];
        grid[row][col] = color;
        int nx = 0;
        int ny = 0;
        while (!q.empty())
        {
            node now = q.front();
            q.pop();
            int dx[4] = {1, 0, -1, 0};
            int dy[4] = {0, 1, 0, -1};
            for (int i = 0; i <= 3; i++)
            {
                nx = now.x + dx[i];
                ny = now.y + dy[i];
                if (nx >= 0 && ny >= 0 && nx < grid.size() && ny < grid[0].size() && vis[nx][ny] != 1)
                {
                    vis[nx][ny] = 1;
                    if (grid[nx][ny] == origin)
                    {
                        node next;
                        next.x = nx;
                        next.y = ny;
                        next.c = origin;
                        q.push(next);
                        grid[nx][ny] = color;
                    }
                }
            }
        }
        memset(vis,0,sizeof(vis));
        for (int i = 0; i < save.size(); i++)
            for (int j = 0; j < save[0].size(); j++)
            {
                if(i==1&&j==1)
                 cout<<"here"<<endl;
                if (save[i][j] != origin)
                    continue;
                if (!(i == 0 || i == save.size() - 1 || j == 0 || j == save[0].size() - 1))
                {
                    bool is = true;
                    int dx[4] = {1, 0, -1, 0};
                    int dy[4] = {0, 1, 0, -1};
                    for (int k = 0; k <= 3; k++)
                    {
                        nx = i + dx[k];
                        ny = j + dy[k];
                        if (!(nx >= 0 && ny >= 0 && nx < save.size() && ny < save[0].size() && save[nx][ny] == origin))
                        {
                            is = false;
                            break;
                        }
                    }
                    if (is)
                    {
                        vis[i][j] = 5;
                    }
                }
            }
        copy = grid;
        
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (vis[i][j] == 5)
                    copy[i][j] = ans[i][j];
            }
        return copy;
    }
};
//
int main()
{
    //[[1,2,1,2,1,2],[2,2,2,2,1,2],[1,2,2,2,1,2]]

    Solution S;
    vector<vector<int>> vs;
    vc v1 = {1,2,1,2,1,2};
    vc v2 = {2,2,2,2,1,2};
    vc v3 = {1,2,2,2,1,2};
    vs.push_back(v1);
    vs.push_back(v2);
    vs.push_back(v3);
    S.colorBorder(vs, 1, 3, 1);
    return 0;
}
