//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    struct Node
    {
        int x;
        int y;
        char data;
        Node(int x, int y, char data) : x(x), y(y), data(data){};
    };

    int numIslands(vector<vector<char>> &grid)
    {
        int book[100][100];
        memset(book, 0, sizeof(book));
        int ans = 0;
        int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '1' && book[i][j] != 1)
                {
                    ans++;
                    queue<Node> q;
                    Node s(i, j, '1');
                    q.push(s);
                    book[i][j] = 1;
                    while (!q.empty())
                    {
                        Node curr = q.front();
                        q.pop();
                        for (int i = 0; i <= 3; i++)
                        {
                            int nx = curr.x + dx[i];
                            int ny = curr.y + dy[i];
                            if (nx >= 0 && nx < m && ny >= 0 && ny < n && book[nx][ny] != 1&&grid[nx][ny]=='1')
                            {
                                book[nx][ny]=1;
                                Node next(nx,ny,'1');
                                q.push(next);
                            }
                        }
                    }
                }
            }
            return ans;
    }
};
//
int main()
{
    Solution S;
    //vc v={};

    return 0;
}
