//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    { 
        vector<int> v1;
        vector<int> v2;
        while(l1!=nullptr)
        {
            v1.push_back(l1->val);
            l1 = l1->next;
        }
        
        while(l2!=nullptr)
        {
            v2.push_back(l2->val);
            l2 = l2->next;
        }
        
        int n1 = v1.size();
        int n2 = v2.size();
        if(n1>n2)
        {
            v2.resize(v1.size());
        }
        else if(n1<n2)
        {
            v1.resize(v2.size());
        }
        int carry=0;
        for(int i=0;i<v1.size();i++)
        {
            int a = v1[i];
            int b = v2[i];
            int adv=0;
            if(carry!=0)
            {
                adv+=carry;
                carry=0;
            }
            adv=adv+a+b;
            if(adv>=10)
            {
                carry=1;
                adv=adv%10;
            }
            v1[i] =adv;
        }
        if(carry!=0)
         v1.push_back(1);
        ListNode* ans = new ListNode();
        ans->val=v1[v1.size()-1];
        ListNode* res = new ListNode();
        res =ans;
        for(int i=v1.size()-2;i>=0;i--)
        {
             ListNode* curr = new ListNode();
             curr->val = v1[i];
             curr->next = ans;
             ans = curr;
             res = curr;
        }
        return res;
    }
};
//
int main()
{
    Solution S;
    //vc v={};

    return 0;
}
