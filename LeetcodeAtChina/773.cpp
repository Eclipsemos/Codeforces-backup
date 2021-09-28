#include <bits/stdc++.h>
using namespace std;
class Solution
{
    struct node
    {
       string d;
       int step=0;
       node(string d, int step):d(d),step(step){}
    };
    vector<vector<int>> dir ={{1,3},{0,2,4},{1,5},{0,4},{1,3,5},{2,4}};
    void exchange(string& str,int index,int neigh)
    {
        char temp = str[index];
        str[index] = str[neigh];
        str[neigh] = temp;
    }
public:
    int slidingPuzzle(vector<vector<int>> &board)
    {
        queue<node> q;
        string ans = "123450";
        string start;
        for(int i=0;i<board.size();i++)
             for(int j=0;j<board[i].size();j++)
                 start+=char(board[i][j]+48);    
        if(start==ans)
         return 0;
        q.push(node(start,0));
        unordered_set<string> vis;
        vis.insert(start);
        while(!q.empty())
        {
            node c = q.front();
            q.pop();
            if(c.d==ans)
             return c.step;
            int index = c.d.find('0');
            for(int i=0;i<dir[index].size();i++)
            {
                int neighbour = dir[index][i];
                string curr=c.d;
                exchange(curr,index,neighbour);
                if(!vis.count(curr))
                {
                     q.push(node(curr,c.step+1));
                     vis.insert(curr);
                }
            }
        }
        return -1;
    }
};

int main()
{
    Solution S;
    vector<int> h1={1,2,3};
    vector<int> h2={4,0,5};
    vector<vector<int>> board;
    board.push_back(h1);
    board.push_back(h2);
    cout<<S.slidingPuzzle(board);
    return 0;
}