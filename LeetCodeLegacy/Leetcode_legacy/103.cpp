// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
//left->righ
class Solution
{
public:
    int maxd=0;
    vector<vector<TreeNode*>> v;
    void dfs(TreeNode* node, int depth)
    {
        v[depth].push_back(node);
        if(node->left)
        {
            dfs(node->left,depth+1);
        }
        if(node->right)
        {
            dfs(node->right,depth+1);
        }
        maxd = max(maxd,depth);
        return;
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>>  res;
        if(root==nullptr)
         return res;
        v.resize(100);
        dfs(root,0);
        int flag=1;
        
        for(int i=0;i<=maxd;i++)
        {
            vector<int> curr;
            if(flag==1)
            {
                flag=0;
                for(int j=0;j<v[i].size();j++)
                  curr.push_back(v[i][j]->val);
            }
            else
            {
                flag=1;
                for(int j=v[i].size()-1;j>=0;j--)
                  curr.push_back(v[i][j]->val);
            }
            res.push_back(curr);
        }
        return res;
    }
};
int main()
{
    Solution S;
    // vc v={};
    TreeNode* n7 = new TreeNode(7);
    TreeNode* n15 = new TreeNode(15);
    TreeNode* n20 = new TreeNode(20);
    TreeNode* n9 = new TreeNode(9);
    TreeNode* n3 = new TreeNode(3);
    n3->left=n9;
    n3->right=n20;
    n20->left=n15;
    n20->right=n7;
    S.zigzagLevelOrder(n3);
    return 0;
}
