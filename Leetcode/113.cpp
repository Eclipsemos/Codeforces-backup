//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
private:
    vector<vector<int>> ans;
    vector<int> curr;
    void doit(TreeNode *root, int targetSum)
    {
        if(root==nullptr)
         return;
        if(root->right==nullptr&&root->left==nullptr)
        {
            if(root->val==targetSum)
             {
                 ans.push_back(curr);
             }
        }
       
        if (root->left != nullptr)
        {
            curr.push_back(root->left->val);
            root->left->val += root->val;
             doit(root->left, targetSum);
            curr.pop_back();
        }
        if (root->right != nullptr)
        {
            curr.push_back(root->right->val);
            root->right->val += root->val;
             doit(root->right, targetSum);
            curr.pop_back();
        }
        return;
    }

public:
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        if(root==nullptr)
        return ans;
        curr.push_back(root->val);
        doit(root, targetSum);
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
