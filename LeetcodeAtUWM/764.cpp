#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>> &mines)
    {
        if (mines.size() == n * n)
            return 0;
        if (mines.size() > n * n - 5)
            return 1;
        int mat[n][n];
        int touch[n][n][4];
        memset(mat, -1, sizeof(mat));
        memset(touch, 0, sizeof(touch));
        for (auto &v : mines)
        {
            mat[v[0]][v[1]] = 0;
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 0)
                    continue;
                touch[i][j][0] = 1 + ((i > 0) ? touch[i - 1][j][0] : 0);
                touch[i][j][1] = 1 + ((j > 0) ? touch[i][j - 1][1] : 0);
            }
        for (int i = n - 1; i >= 0; i--)
            for (int j = n - 1; j >= 0; j--)
            {
                if (mat[i][j] == 0)
                    continue;
                touch[i][j][2] = 1 + ((i < n - 1) ? touch[i + 1][j][2] : 0);
                touch[i][j][3] = 1 + ((j < n - 1) ? touch[i][j + 1][3] : 0);
            }
        //dp complete
        int res = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 0)
                    continue;
                int s = min(min(touch[i][j][0], touch[i][j][1]), min(touch[i][j][2], touch[i][j][3]));
                res = max(res, s);
            }
        return res;
    }
};
//
int main()
{
    Solution S;

    return 0;
}
