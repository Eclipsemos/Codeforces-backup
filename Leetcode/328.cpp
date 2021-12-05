// Xinyun Ye UWMADISON CS 2021
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
    ListNode *oddEvenList(ListNode *head)
    {
        if(head==nullptr)
         return nullptr;
        int n=1;
        vector<int> nums;
        ListNode* copy = head;
        while(copy!=nullptr)
        {
            if(n%2)
             nums.push_back(copy->val);
            n++;
            copy = copy->next;
        }
        ListNode* copy1 = head;
        n=1;
        while(copy1!=nullptr)
        {
            if(n%2==0)
             nums.push_back(copy1->val);
            n++;
            copy1 = copy1->next;
        }
        reverse(nums.begin(),nums.end());
        ListNode* ans = new ListNode(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            ListNode* curr = new ListNode(nums[i]);
            curr->next = ans;
            ans = curr;
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    ListNode* a = new ListNode(5);
    ListNode* b = new ListNode(4,a);
    ListNode* c = new ListNode(3,b);
    ListNode* d = new ListNode(2,c);
    ListNode* e = new ListNode(1,d);
    S.oddEvenList(e);
    return 0;
}
