// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

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
    ListNode *deleteMiddle(ListNode *head)
    {
        ListNode *copy = head;
        vector<int> nums;
        while (copy != nullptr)
        {
            nums.push_back(copy->val);
            copy = copy->next;
        }
        reverse(nums.begin(), nums.end());
        if(nums.size()==1)
         return nullptr;
        ListNode *last =nullptr;
        ListNode *ans = new ListNode();
        for (int i = 0; i < nums.size(); i++)
        {
            if (i !=nums.size()-1-nums.size()/2)
            {
                ans = new ListNode(nums[i], last);
                last = ans;
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
