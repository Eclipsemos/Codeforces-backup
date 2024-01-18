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
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
       
        vector<int> buckets;
        for(int i=0;i<lists.size();i++)
        {
            ListNode *curr = lists[i];
            while(curr!=nullptr)
            {
                buckets.emplace_back(curr->val);
                curr = curr ->next;
            }
        }
        sort(buckets.begin(),buckets.end());
        ListNode *ans =new ListNode();
        ListNode *now = ans;
        for(int i=0;i<buckets.size();i++)
        {
            ListNode *curr = new ListNode(buckets[i]);
            now->next = curr;
            now = now->next;
        }
        

        return ans->next;
    }
};
//
int main()
{
    Solution S;
    //vc v={};

    return 0;
}
