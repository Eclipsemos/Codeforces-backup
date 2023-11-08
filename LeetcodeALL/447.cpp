#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
private:
    int getdis(vector<int> x, vector<int> y)
    {
        return (x[0] - y[0]) * (x[0] - y[0]) + (x[1] - y[1]) * (x[1] - y[1]);
    }

public:
    int numberOfBoomerangs(vector<vector<int>> &points)
    {
        int res = 0;
        int size = points.size();
        if (size == 1)
            return 0;

        for (int i = 0; i < size; i++)
        {
            map<int, int> mp;
            for (int j = 0; j < size; j++)
            {
                if (i != j)
                {
                    int dis = getdis(points[i], points[j]);
                    mp[dis]++;
                }
            }
            for (auto iter = mp.begin(); iter != mp.end(); ++iter)
            {
                int num = iter->second;
                res += num * (num - 1);
            }
        }

        return res;
    }
};
//
int main()
{
    //[[0,0],[1,0],[-1,0],[0,1],[0,-1]]
    Solution S;
    vector<vector<int>> arr;
    arr.push_back({0, 0});
    arr.push_back({1, 0});
    arr.push_back({-1, 0});
    arr.push_back({0, 1});
    arr.push_back({0, -1});
    cout << S.numberOfBoomerangs(arr);
    return 0;
}
