#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
/*
 * Definition for singly-linked list.
 * struct ListNode 
 * {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getKthFromEnd(ListNode *head, int k)
    {
        int n =0;
        ListNode* node = nullptr;
        for(node = head;node!=nullptr;node=node->next)
         n++;
        for(node = head;n>k;n--)
        {
            node = node->next;
        }
        return node;
    }
};

int main()
{
    Solution S;
    ListNode *a = NULL;
    a = new ListNode(1);
    ListNode *b = NULL;
    b = new ListNode(2);
    ListNode *c = NULL;
    c = new ListNode(3);
    ListNode *d = NULL;
    d = new ListNode(4);
    ListNode *e = NULL;
    e = new ListNode(5);
    a->next=b;
    b->next=c;
    c->next=d;d->next=e;



    return 0;
}
