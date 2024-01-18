#include <bits/stdc++.h>
using namespace std;

class Solution
{
    struct node
    {
        int data;
        int index;
        int step;
        node(int data, int index, int step) : data(data), index(index), step(step){}
    };

public:
    int snakesAndLadders(vector<vector<int>> &board)
    {
        int len = board.size() * board[0].size();
        vector<int> arr(len + 1, 0);
        bool vis[len + 1];
        int index = 1;
        int row = 1;
        for (int i = board.size() - 1; i >= 0; i--)
        {
            if (row % 2 != 0)
                for (int j = 0; j < board[i].size(); j++)
                {
                    arr[index] = board[i][j];
                    index++;
                }
            else
                for (int j = board[i].size() - 1; j >= 0; j--)
                {
                    arr[index] = board[i][j];
                    index++;
                }
            row++;
        }
        queue<node> q;
        node start(arr[1], 1, 0);
        memset(vis,false,sizeof(vis));
        vis[1] = true;
        q.push(start);
        while (!q.empty())
        {
            node curr = q.front();
            q.pop();
            if (curr.index == len)
                return curr.step;
            for (int i = 1; i <= 6; i++)
            {
                if (i + curr.index > len)
                        break;
               
                    node next(arr[i + curr.index], i + curr.index, curr.step + 1);
                    if (next.data != -1)
                    {
                        next.index = next.data;
                        next.data = arr[next.data];
                    }
                    if(vis[next.index]!=true)
                    {
                          vis[next.index] = true;
                          q.push(next);
                    }
                    
                
            }
        }
        return -1;
    }
};

int main()
{
    Solution S;
    vector<vector<int>> board;
    vector<int> l1 = {1, 1, -1};
    board.push_back(l1);
    vector<int> l2 = {1, 1, 1};
    board.push_back(l2);
    vector<int> l3 = {-1, 1, 1};
    board.push_back(l3);
    cout << S.snakesAndLadders(board);
    return 0;
}