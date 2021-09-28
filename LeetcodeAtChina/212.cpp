#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

class Solution
{
private:
    vector<string> res;
    int rows;
    int cols;

public:
    class trie
    {
    public:
        vector<trie *> nodes;
        string word;
        trie() : nodes(26, nullptr) {}
        //  friend class Solutions;
    };

    vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
    {
        rows = board.size();
        cols = board[0].size();
        if (cols <= 0 || rows <= 0||words.size()<=0)
            return res;
        trie* root = new trie();
        for(string word:words)
        {
            trie* curr = root;
            for(char c:word)
            {
                int index = c-'a';
                if(curr->nodes[index]==nullptr)
                {
                    curr->nodes[index] = new trie();
                }
                curr = curr ->nodes[index];
            }
            curr->word=word;
        }
        for(int i=0;i<rows;i++) 
          for(int j=0;j<cols;j++) 
           dfs(board,root,i,j);
        return res;
    }

    void dfs(vector<vector<char>>& board,trie* root, int x,int y)
    {
        char c = board[x][y];
        int index = c-'a';
        if(board[x][y]=='*'||root->nodes[index]==nullptr)
         return;
        if(root->nodes[index]->word!="")
        {
            res.push_back(root->nodes[index]->word);
            root->nodes[index]->word="";
        }
        board[x][y]='*';
        if(x>0)
        {
            dfs(board,root->nodes[index],x-1,y);
        }
        if(y>0)
        {
            dfs(board,root->nodes[index],x,y-1);
        }
        if(x<rows-1)
        {
            dfs(board,root->nodes[index],x+1,y);
        }
        if(y<cols-1)
        {
            dfs(board,root->nodes[index],x,y+1);
        }
        board[x][y] = c;//reverse
    }
};
//
int main()
{
    Solution S;

    return 0;
}
