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

class Solution
{
public:///BFS + MAP
    unordered_map<int,TreeNode*> mp;
    unordered_map<int,TreeNode*> nums;
    int len=0;
    void dfs(TreeNode *now)
    {
        len++;
        nums[now->val]= now;
        if(now->left!=nullptr)
        {
            mp[now->left->val]=now;
            dfs(now->left);
        }

        if(now->right!=nullptr)
        {
            mp[now->right->val]=now;
            dfs(now->right);
        }
    }
    struct Node
    {
        TreeNode* tnode;
        int data;
        string str;
        Node(TreeNode *t,int d,string s):tnode(t),data(d),str(s){}
    };
    
    string getDirections(TreeNode *root, int startValue, int destValue)
    {
        mp[root->val] =nullptr;
        TreeNode* copy = root;
        dfs(copy);
        queue<Node*> q;
        int vis[len+1];
        q.push(new Node(nums[startValue],0,""));
        
        while(!q.empty())
        {
            Node* now = q.front();
            if(now->tnode->val==destValue)
             return now->str;
            q.pop(); 
            vis[now->tnode->val]=1;
            cout<<now->str<<endl;
            if(mp[now->tnode->val]!=nullptr&&vis[mp[now->tnode->val]->val]!=1)
            {
                q.push(new Node(mp[now->tnode->val],now->data+1,now->str+"U"));
            }
            if(now->tnode->left!=nullptr&&vis[now->tnode->left->val]!=1)
            {
                q.push(new Node(now->tnode->left,now->data+1,now->str+"L"));
            }
            if(now->tnode->right!=nullptr&&vis[now->tnode->right->val]!=1)
            {
                q.push(new Node(now->tnode->right,now->data+1,now->str+"R"));
            }
        }
        return "";
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    //TreeNode* a3 = new TreeNode(3);
    TreeNode* a1 = new TreeNode(1);
    //TreeNode* a5 = new TreeNode(5);
    TreeNode* a2 = new TreeNode(2);
    //TreeNode* a6 = new TreeNode(6);
    //TreeNode* a4 = new TreeNode(4);
    //a1->left=a3;
    //a2->left=a6;
    //a2->right=a4;
    //a5->left=a1;
    //a5->right=a2;
    a2->left=a1;
    cout<<S.getDirections(a2,2,1);
    return 0;
}
