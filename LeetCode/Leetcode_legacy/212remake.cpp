//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:

    struct TrieNode
    {
        vector<TrieNode*> children;
        string word;
        TrieNode():children(26){};
    };
 


    void dfs(vector<vector<bool>> &vis,vector<vector<char>> &board,TrieNode *curr, int x,int y,vector<string>& res)
    {
        if(x<0||x>=board.size()||y<0||y>=board[0].size()||vis[x][y]||!curr->children[board[x][y]-'a'])
        return;
            curr = curr->children[board[x][y]-'a'];
            if(curr->word!="")
            {
                res.push_back(curr->word);
                curr->word="";
            }
           
            int dx[4]={0,1,0,-1};
            int dy[4]={-1,0,1,0};
            vis[x][y]=true;
            for(int i=0;i<=3;i++)
            {

                dfs(vis,board,curr,dx[i]+x,dy[i]+y,res);
            }
            vis[x][y]=false;
    }
    vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
    {
        vector<vector<bool>> vis(board.size(), vector<bool>(board[0].size()));
        vector<string> ans;
        TrieNode *head = new TrieNode();
        for(auto& word:words)
        {
            TrieNode *curr = head;
            for(auto c:word)
            {
                if(!curr->children[c-'a'])
                 curr->children[c-'a'] = new TrieNode();
                curr = curr->children[c-'a'];
            }
            curr->word = word;
        }
        for(int i=0;i<board.size();i++)
         for(int j=0;j<board[i].size();j++)
          {
            dfs(vis,board,head,i,j,ans);
          }
          return ans;
    }
};
//
int main()
{
    Solution S;
    vector<vector<char>> mp;
    vector<string> vstr={"oaan","etae","ihkr","iflv"};
    for(int i=0;i<vstr.size();i++)
    {
        vector<char> v1;
        for(int j=0;j<vstr[i].size();j++)
        {
            v1.push_back(vstr[i][j]);
        }
        mp.push_back(v1);
    }
    vector<string> tag = {"oath","pea","eat","rain"};
    vector<string> ans = S.findWords(mp,tag);
   //vc v={};
    
    return 0;
 }
