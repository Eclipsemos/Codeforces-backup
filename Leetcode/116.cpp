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
         return root;
        queue<Node *> q;
        q.push(root);
        
        while (!q.empty())
        {
            int n = q.size();
            Node* last = nullptr;  
            for(int i=1;i<=n;i++)
            {
                Node* now = q.front();
                q.pop();
                if(now->left!=nullptr)
                 q.push(now->left);
                if(now->right!=nullptr)
                 q.push(now->right);
                if(i!=1)
                {
                    last->next=now;
                }
                last = now; 
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
