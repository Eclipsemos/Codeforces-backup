//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution
{
public:
    map<int, TreeNode *> mp;
    int tk;
    vector<int> ans;
    vector<int> used;
    void travel(TreeNode *root)
    {
        if (root == nullptr)
            return;
        if (root->left != nullptr)
        {
            mp[root->left->val] = root;
            travel(root->left);
        }

        if (root->right != nullptr)
        {
            mp[root->right->val] = root;
            travel(root->right);
        }
    }
    void go(TreeNode *root, int step)
    {
        if (step == tk)
        {
            ans.push_back(root->val);
            return;
        }
        if (root->left != nullptr&&used[root->left->val]!=1)
        {
            used[root->left->val]=1;
            go(root->left, step + 1);
            used[root->left->val]=0;
        }
        if (root->right != nullptr&&used[root->right->val]!=1)
        {
            used[root->right->val]=1;
            go(root->right, step + 1);
            used[root->right->val]=0;
        }
        if (mp[root->val] != nullptr&&used[mp[root->val]->val!=1)
        {
            used[mp[root->val]->val=1;
            go(mp[root->val], step + 1);
            used[mp[root->val]->val=0;
        }
    }
    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        used.resize(501);
        used.clear();
        tk = k;
        ans.clear();
        TreeNode *head = root;
        travel(head);
        //down search
        head = target;
        go(head, 0);
        return ans;
    }
};
//
int main()
{
    Solution S;
    //vc v={};

    return 0;
}
