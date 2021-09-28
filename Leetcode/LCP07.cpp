#include <bits/stdc++.h>
using namespace std;
//
class Solution
{
private:
 struct node
 {
    int val;
    int step;
    node(int val,int step):val(val),step(step){}
 };
 
public:
    int numWays(int n, vector<vector<int>> &relation, int k)
    {
        map<int,vector<int>> road;
        for(int i=0;i<relation.size();i++)
         road[relation[i][0]].push_back(relation[i][1]);
        int target = n-1;
        node start(0,0);
        queue<node> q;
        q.push(start);
        int ans=0;
        while(!q.empty())
        {
            node curr = q.front();
            q.pop();
            if(curr.val==target&&curr.step==k)
                 ans++;
            else
            {
                if(curr.step>k)
                 continue;
                vector<int> dir = road[curr.val];
                for(int des:dir)
                {
                    node next(des,curr.step+1);
                    q.push(next);
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution S;
    int k=5;
    vector<vector<int>> relation;
    vector<int> r1={0,1}; relation.push_back(r1);
    vector<int> r2={0,2}; relation.push_back(r2);
    vector<int> r3={2,1}; relation.push_back(r3);
    vector<int> r4={1,2}; relation.push_back(r4);
    vector<int> r5={1,0}; relation.push_back(r5);
    vector<int> r6={2,0}; relation.push_back(r6);
    cout<<S.numWays(3,relation,k);
    return 0;
}