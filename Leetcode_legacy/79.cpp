//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    string tag;
    int flag = 0;
    int book[8][8];
    void dfs(vector<vector<char>> &board, int x, int y, string word)
    {
        if (word == tag)
        {
            flag = 1;
            return;
        }
        int dir1[4] = {0, -1, 0, 1};
        int dir2[4] = {1, 0, -1, 0};
        for (int i = 0; i <= 3; i++)
        {
            int cx = x + dir1[i];
            int cy = y + dir2[i];
            if (cx >= 0 && cx < board.size() && cy >= 0)
                if (cy < board[0].size() && book[cx][cy] != 1)
                {
                    if (board[cx][cy] == tag[word.size()])
                    {
                        book[cx][cy] = 1;
                        dfs(board, cx, cy, word + board[cx][cy]);
                        book[cx][cy] = 0;
                    }
                }
        }
    }
    bool exist(vector<vector<char>> &board, string word)
    {
        tag = word;
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == word[0])
                {
                    string str = "";
                    str += word[0];
                    book[i][j] = 1;
                    dfs(board, i, j, str);
                    book[i][j] = 0;
                }
            }
        if (flag == 0)
            return false;
        return true;
    }
};
//
int main()
{
    Solution S;
    vector<vector<char>> board;
    vector<char> v1 = {'A', 'B', 'C', 'E'};
    vector<char> v2 = {'S', 'F', 'C', 'S'};
    vector<char> v3 = {'A', 'D', 'E', 'E'};
    board.push_back(v1);
    board.push_back(v2);
    board.push_back(v3);
    cout << S.exist(board, "ABCB");

    return 0;
}
