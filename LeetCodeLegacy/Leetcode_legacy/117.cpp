// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
struct Node
{
    int val;
    Node *left;
    Node *right;
    Node *next;
};

class Solution
{
public:
    Node *connect(Node *root)
    {
        if(root==nullptr)
        return nullptr;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            Node *now = nullptr;
            for(int i=1;i<=n;++i)
            {
                Node *f = q.front();
                q.pop();
                if(f->left)
                {
                    q.push(f->left);
                }
                if(f->right)
                {
                    q.push(f->right);
                }
                if(i!=1)
                 now->next = f;
                now = f;
            }
        }


        return root;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    Node *a1 = new Node();
    a1->val = 1;
    Node *a2 = new Node();
    a2->val = 2;
    Node *a3 = new Node();
    a3->val = 3;
    Node *a4 = new Node();
    a4->val = 4;
    Node *a5 = new Node();
    a5->val = 5;
    Node *a6 = new Node();
    a6->val = 7;
    a1->left = a2;
    a1->right = a3;
    a2->left = a4;
    a2->right = a5;
    a3->right = a6;
    S.connect(a1);
    return 0;
}
