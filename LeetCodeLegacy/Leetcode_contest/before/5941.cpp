// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int fa[100005];
    int used[100001];
    inline void init(int n)
    {
        for (int i = 1; i <= n; ++i)
            fa[i] = i;
    };

    int find(int x)
    {
        used[x]=1;
        if (fa[x] == x)
            return x;
        else
            return find(fa[x]);
    
    };

    inline void merge(int i, int j)
    {
        fa[find(i)] = find(j);
    }

    vector<int> findAllPeople(int n, vector<vector<int>> &meetings, int firstPerson)
    {
        vector<int> man(n + 1, -1);
        init(n);
        map<int, vector<vector<int>>> mp;
        vector<int> ans;
      
        int len = meetings.size();
       
        memset(used, 0, sizeof(used));
        used[firstPerson] = 1;
        used[0] = 1;
        int end = 0;
        merge(firstPerson,0);
        for (int i = 0; i < meetings.size(); i++)
        {
            vector<int> now;
            now.push_back(meetings[i][0]);
            now.push_back(meetings[i][1]);
            mp[meetings[i][2]].push_back(now);
            end = max(end, meetings[i][2]);
        }
        for(auto&x:mp)
        {
            vector<vector<int>> curr=x.second;
            for(vector<int> a:curr)
            {
                merge(a[0],a[1]);
            }
            for(vector<int> a:curr)
            {
                if(!used[a[0]]&&!used[a[0]])
                 continue;
                find(a[0]);
                find(a[1]);
            }
        }
        for(int i=0;i<=n;i++)
        {
            if(used[i])
             ans.push_back(i);
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v1 = {1, 2, 5};
    vc v2 = {2, 3, 8};
    vc v3 = {1, 5, 10};
    vector<vector<int>> a;
    a.push_back(v1);
    a.push_back(v2);
    a.push_back(v3);
    S.findAllPeople(6, a, 1);
    return 0;
}
