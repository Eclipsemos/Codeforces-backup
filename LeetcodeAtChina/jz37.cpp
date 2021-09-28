#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec
{

public:
    // Encodes a tree to a single string.

    string serialize(TreeNode *root)
    {
        string ans;
        if (root == nullptr)
            return ans;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *curr = q.front();
            q.pop();
            if (curr != nullptr)
            {
                ans += to_string(curr->val) + ",";
                q.push(curr->left);
                q.push(curr->right);
            }
            else
            {
                ans += "null,";
            }
        }
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        if (data == "")
            return nullptr;
        vector<string> vals;
        string s;
        for (int i = 0; i < data.size(); i++)
        {
            if (data[i] == ',')
            {
                vals.push_back(s);
                s = "";
            }
            else
            {
                s += data[i];
            }
        }
        TreeNode *root = new TreeNode(atoi(vals[0].c_str()));
        queue<TreeNode *> q;
        q.push(root);
        int i = 0;
        while (!q.empty())
        {
            TreeNode *curr = q.front();
            q.pop();
            if(vals[i*2+1]!="null")
            {
                curr->left = new TreeNode(atoi(vals[i*2+1].c_str()));
                q.push(curr->left);
            }
            if(vals[i*2+2]!="null")
            {
                curr->right = new TreeNode(atoi(vals[i*2+2].c_str()));
                q.push(curr->right);
            }
            i++;
            if(i==4)
             cout<<"here"<<endl;
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    Codec codec;
    codec.deserialize(codec.serialize(root));
    return 0;
}