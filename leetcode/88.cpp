#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> arr1;
        vector<int> arr2;
        vector<int> ans;
        for (int i = 0; i < m; i++)
                arr1.push_back(nums1[i]);
        arr2 = nums2;
        //merge
        int index1 = 0;
        int index2 = 0;
        while (index1 < arr1.size() || index2 < arr2.size())
        {
            if (index1 < arr1.size())
            {
                if (index2 < arr2.size())
                {
                    if (arr1[index1] < arr2[index2])
                    {
                        ans.push_back(arr1[index1]);
                        index1++;
                    }
                    else
                    {
                        ans.push_back(arr2[index2]);
                        index2++;
                    }
                }
                else
                {
                    ans.push_back(arr1[index1]);
                    index1++;
                }
            }
            else
            {
                ans.push_back(arr2[index2]);
                index2++;
            }
        }
        nums1 = ans;
        // string str="[";
        // char curr=ans[0]+'0';
        // str+=curr;
        // for(int i=1;i<ans.size();i++)
        // {
        //     str+=",";
        //     curr=ans[i]+'0';
        //     str+=curr;
        // }
        // str+="]";
        // cout<<str<<endl;
    }
};

int main()
{
   // vector<int> a={1,2,3,0,0,0};
    vector<int> a={1};
    vector<int> b={};
    Solution S;
    S.merge(a,1,b,0);
    return 0;
}