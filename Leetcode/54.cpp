// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int x = 0;
        int y = 0;
        int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};
        int count = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        int dir = 0;
        bool book[11][11];
        memset(book, 0, sizeof(book));
        while (count < m * n)
        {
            ans.emplace_back(matrix[x][y]);
            book[x][y] = 1;
            int nx = dx[dir] + x;
            int ny = dy[dir] + y;
            if ( nx >= n || ny >= m || nx < 0 || ny < 0||book[nx][ny])
            {
                dir++;
                if (dir == 4)
                    dir = 0;
                nx = dx[dir] + x;
                ny = dy[dir] + y;
            }
            x= nx;
            y=ny;
            count++;
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
     vc v1={1,2,3,4};
     vc v2={5,6,7,8};
     vc v3={9,10,11,12};
    vector<vector<int>> mt;
    mt.push_back(v1);
    mt.push_back(v2);
    mt.push_back(v3);
    S.spiralOrder(mt);

    return 0;
}
