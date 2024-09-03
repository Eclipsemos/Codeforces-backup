//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int fa[201];
    void init(int size)
    {
        for(int i=0;i<size;i++)
         fa[i]=i;
    }

    int find(int x)
    {
        if(fa[x]==x)
         return x;
        else
        {
            fa[x] = find(fa[x]);
            return find(fa[x]);
        }
         
    }
    void merge(int i,int j)
    {
        fa[find(i)]=find(j);
    }
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        vector<int> used;
        used.resize(isConnected.size());
        int n = isConnected.size();
        init(n);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(isConnected[i][j]==1||isConnected[j][i]==1)
                 {
                     merge(i,j);
                 }
            }
        }
        set<int> ans;
        for(int i=0;i<n;i++)
        {
            if(ans.count(find(i))!=1)
            {
                ans.insert(find(i));
            }
        }
        return ans.size();
    }
};
//
int main()
{
    Solution S;
    //vc v={};

    return 0;
}
