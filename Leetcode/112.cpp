//Xinyun Ye UWMADISON CS 2021
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

class Solution
{
private:
    vector<int> ans;
    void doit(TreeNode *root, int targetSum)
    {
        if(root==nullptr)
         return;
        if (root->right==nullptr&&root->left==nullptr)
        {
            ans.push_back(root->val);
        }
        if (root->left != nullptr)
        {
            root->left->val += root->val;
             doit(root->left, targetSum);
        }
        if (root->right != nullptr)
        {
            root->right->val += root->val;
             doit(root->right, targetSum);
        }
        return;
    }

public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        doit(root, targetSum);
        for(auto& it: ans)
        {
            cout<<it<<endl;
            if(it==targetSum)
             return true;
        }
        return false;
    }
};
//
int main()
{
    Solution S;
    //vc v={};

    return 0;
}
