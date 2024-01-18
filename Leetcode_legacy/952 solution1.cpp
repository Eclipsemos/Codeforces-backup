// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int fa[100005], prime[100005];
    inline void init(int n)
    {
        for(int i=0;i<=n;i++)
        {
            fa[i]=i;
            prime[i]=1;
        }
         
    }

    int find(int x)
    {
        return x == fa[x]?fa[x]:fa[x]=find(fa[x]);
    }
    
    inline void merge(int i,int j)
    {
        fa[find(j)]=find(i);
    }
    //
    int largestComponentSize(vector<int> &nums)
    {
        init(100000);
        set<int> s;
        for(int x:nums)
        {
            s.insert(x);
        }
        for(int i=2;i<=100000;i++)
        {
            if(prime[i])
            {
                for(int j = i*2;j<=100000;j+=i)
                {
                    prime[j]=0;
                    if(s.count(j))
                     merge(i,j);
                }
            }
        }
        int res=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[find(nums[i])]++;
            res = max(res,mp[find(nums[i])]);
        }
        return res;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
