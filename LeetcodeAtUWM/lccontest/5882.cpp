#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{

public:
    long long gridGame(vector<vector<int>> &grid)
    {
        int n = grid[0].size();
        long long f1[n + 1], f2[n + 1];
        f1[0] = grid[1][0];
        for (int i = 1; i < n; i++)
            f1[i] = f1[i - 1] + grid[1][i];
        f2[n - 1] = grid[0][n - 1];
        for (int i = n - 2; i >= 0; i--)
            f2[i] = f2[i + 1] + grid[0][i];
        long long minn = f1[n - 1];
        for (int i = 0; i < n; i++)
        {
            long long curr = max(f1[i] - grid[1][i], f2[i] - grid[0][i]);
            minn = min(minn, curr);
        }
        //
        return minn;
    }
};
//
int main()
{
    Solution S;
    vc v1 = {2, 5, 4};
    vc v2 = {1, 5, 1};
    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    cout << S.gridGame(v);
    return 0;
}
