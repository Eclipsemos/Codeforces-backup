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
    int ans = 0;
    void doit(TreeNode *root, int targetSum)
    {
        if (root == nullptr)
            return;
        cout << root->val << endl;
        if (root->val == targetSum)
            ans++;
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
    void rec(TreeNode *root, int targetSum)
    {
        if (root == nullptr)
            return;
        doit(root, targetSum);
        if (root->left != nullptr)
            rec(root->left, targetSum);
        if (root->right != nullptr)
            rec(root->right, targetSum);
        return;
    }

public:
    int pathSum(TreeNode *root, int targetSum)
    {
        rec(root, targetSum);
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
