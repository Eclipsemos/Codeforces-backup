#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> arr;
        for (int i = 0; i < nums1.size(); i++)
            arr.push_back(nums1[i]);
        for (int i = 0; i < nums1.size(); i++)
            arr.push_back(nums2[i]);
        
        //0 1 2 
        //1 2 3 
        // 2
        //0 1 2 3
        //1 2 3 4
    }
};

int main()
{
    vector<int> n1 = {1,2};
    vector<int> n2 = {3};
    Solution S;
    S.findMedianSortedArrays(n1,n2);
    return 0;
}