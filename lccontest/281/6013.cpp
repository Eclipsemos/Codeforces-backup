// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {
        vector<int> copy, ans;
        ListNode *root = head;
        while (root != nullptr)
        {
            copy.push_back(root->val);
            root = root->next;
        }
    
        int n = copy.size();
        int curr = 0;
        for (int i = 0; i < n; i++)
        {
            if (copy[i] == 0)
            {
                if (i != 0)
                {
                    ans.push_back(curr);
                }
                curr = 0;
            }
            else
                curr += copy[i];
        }

        for(int i=0;i<ans.size();i++)
         cout<<ans[i]<<endl;

        reverse(ans.begin(), ans.end());
        ListNode *res = new ListNode(ans[0]);
        for (int i = 1; i < ans.size(); i++)
        {
            ListNode *curr = new ListNode(ans[i],res);
            res = curr;
        }
        return res;
    }
};
//
int main()
{
    Solution S;
   ListNode *a = new ListNode(0);
   ListNode *b = new ListNode(1,a);
   ListNode *c = new ListNode(0,b);
   S.mergeNodes(c);
    return 0;
}
