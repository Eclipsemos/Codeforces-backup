#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    struct node
    {
        int data;
        int step;
        node(int data, int step) : data(data), step(step) {}
    };

    int numBusesToDestination(vector<vector<int>> &routes, int source, int target)
    {
        unordered_map<int, vector<int>> mp;
        int vis[501];
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < routes.size(); i++)
            for (int j = 0; j < routes[i].size(); j++)
            {
                mp[routes[i][j]].push_back(i);
            }
        node start(source, 0);
        queue<node> q;
        q.emplace(start);
        while (!q.empty())
        {
            node c = q.front();
            q.pop();
            if (c.data == target)
            {
                return c.step;
            }
            vector<int> dir = mp[c.data];
            for (int i = 0; i < dir.size(); i++) //ith road
            {
                if (!vis[dir[i]] == 1)
                {
                    for (int j = 0; j < routes[dir[i]].size(); j++) //jth pos in the road
                    {
                        int curr = routes[dir[i]][j];
                        node next(curr, c.step + 1);
                        q.push(next);
                        if (next.data == target)
                            return next.step;
                    }
                    vis[dir[i]] = 1;
                }
            }
        }
        return -1;
    }
};

int main()
{
    Solution S;
    vector<vector<int>> routes;
    vector<int> r1 = {1, 2, 7};
    vector<int> r2 = {3, 6, 7};
    routes.push_back(r1);
    routes.push_back(r2);
    cout << S.numBusesToDestination(routes, 1, 6);
    return 0;
}