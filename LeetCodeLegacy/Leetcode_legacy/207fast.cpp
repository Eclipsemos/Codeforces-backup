//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<vector<int>> edges;
    vector<int> book;
    bool valid=true;

    void dfs(int index)
    {
        book[index]=1;
        for(int v:edges[index])
        {
            if(book[v]==0)
            {
                dfs(v);
                if(!valid)
                 return;
            }
            else if(book[v]==1)
            {
                valid=false;
                return;
            }
        }
       book[index]=2;
    }
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        edges.resize(numCourses);
        book.resize(numCourses);
        for(auto& info:prerequisites)
        {
            edges[info[1]].push_back(info[0]);
        }
        for(int i=0;i<numCourses&&valid;++i)
        {
            if(!book[i])
             dfs(i);
        }
        return valid;
    }
};

//
int main()
{
    Solution S;
    //vc v={};

    return 0;
}
