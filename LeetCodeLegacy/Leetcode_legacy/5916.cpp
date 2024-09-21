//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public: 
    struct node
    {
        int val,step;
    };
    int minimumOperations(vector<int>& nums, int start, int goal) 
    {
        int ans =1001;
        queue<node> q;
        sort(nums.begin(),nums.end());
        q.push(node{start,0});
        map<int,int> mp;
        while(!q.empty())
        {
            node now = q.front(); q.pop();
            if(mp[now.val]!=0)
            {
                continue;
            }
            for(int i=0;i<nums.size();i++)
            {
                int v1 = now.val +nums[i]; int v2 = now.val-nums[i]; int v3 = now.val^nums[i];
                if(!(v1<0||v1>1000||mp[v1]!=0))
                {
                    mp[v1]=0;
                    q.push(node{v1,now.step+1});
                }
                if(!(v2<0||v2>1000||mp[v2]!=0))
                {
                    mp[v2]=0;
                    q.push(node{v2,now.step+1});
                }
                if(!(v3<0||v3>1000||mp[v3]!=0))
                {
                    mp[v3]=0;
                    q.push(node{v3,now.step+1});
                }
                if(v1==goal||v2==goal||v3==goal)
                 return now.step+1;
            }
        }
        return -1;
    }
};
//
int main()
{
    Solution S;
     vc v={2,4,12};
    S.minimumOperations(v,2,12);


    return 0;
 }
