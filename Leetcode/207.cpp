//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<int> book;
    int flag = 0;
    vector<vector<int>> edges;
    void dfs(int now)
    {
        book[now] = 1;
        for (int v : edges[now])
        {
            if (book[v] == 0)
            {
                dfs(v);
                if (flag == 1)
                    return;
            }
            else if (book[v] == 1)
            {
                flag = 1;
                return;
            }
        }
        book[now] = 2;
        return;
    }
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        edges.resize(numCourses);
        book.resize(numCourses);
        int n = prerequisites.size();
        for (int i = 0; i < n; i++)
        {
            edges[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        for (int i = 0; i < numCourses; i++)
        {
            if (flag == 1)
                return false;
            if (!book[i])
                dfs(i);
        }
        return true;
    }
};
//
int main()
{
    Solution S;
    vc v1 = {1, 0};
    vc v2 = {0, 1};
    vc v3 = {1, 2};
    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2); //v.push_back(v3);
    cout << S.canFinish(2, v);

    return 0;
}
