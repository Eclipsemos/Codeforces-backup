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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
//
class Solution
{
public:
    map<TreeNode*,int> mp;
    int ans=0;
    void dfs1(TreeNode *now)
    {
        if(now->val>=mp[now]) 
        {
            ans++;
            cout<<now->val<<endl;
         }
        if(now->left)
        {
            mp[now->left]=max(now->val,mp[now]);
            dfs1(now->left);
        }
        if(now->right)
        {
            mp[now->right]=max(now->val,mp[now]);
            dfs1(now->right);
        }
    }
    int goodNodes(TreeNode *root)
    {
        if(root==nullptr)
         return 0;
        mp.clear();
        mp[root] = root->val;
        dfs1(root);
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
