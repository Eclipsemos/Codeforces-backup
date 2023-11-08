#include <bits/stdc++.h>
using namespace std;
//
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        priority_queue<int, vector<int>, greater<int>> a;
        for (int i = 0; i < m; i++)
            a.push(nums1[i]);
        for (int i = 0; i < n; i++)
            a.push(nums2[i]);
        int index = 0;
        while(!a.empty())
        {
            int curr = a.top();
            //cout<<curr<<" ";
            nums1[index++] = curr;
            a.pop();
        }
    }
};

// O(nlogn)
//
int main()
{
    Solution S;
    return 0;
}
