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

class Solution {
public:
    string path1;
    string path2;
    void search(TreeNode *curNode, string &cur,int val1,int val2)
    {
        if(curNode==nullptr||(!path1.empty()&&!path2.empty()))
            return;
        if(curNode->val==val1)
        {
            path1 = cur;
        }
        if(curNode->val==val2)
        {
            path2 = cur;
        }
        cur.push_back('L');
        search(curNode->left,cur,val1,val2);
        cur.pop_back();
        cur.push_back('R');
        search(curNode->right,cur,val1,val2);
        cur.pop_back();
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string temp;
        search(root,temp,startValue,destValue);
        int m = path1.size();
        int n= path2.size();
        int min = m<n?m:n;
        cout<<path1<<" "<<path2;
        int i=0;
        for(;i<min;++i)
        {
            if(path1[i]!=path2[i])
                break;
        }
        //min;//这是根的位置
        int len = m-i;
        string ans(len,'U');
        if(i<n)
            ans+=path2.substr(i);
        return ans;
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
