//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<int> ans;
    vector<int> book;
    int flag = 0;
    vector<vector<int>> edges;
    void dfs(int now)
    {
        book[now] = 1;
        ans.push_back(now);
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
        ans.push_back(now);
        return;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
    {
        ans.resize(numCourses);
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
                break;
            if (!book[i])
                dfs(i);
        }
        reverse(ans.begin(),ans.end());
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
