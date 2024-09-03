// Nick Ye @UIUC CS 2025'
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    void isort(vector<int> &nums, int l, int r)
    {
        int n = nums.size();
        for(int i=1;i<n;i++)
        {
            for(int j=i;j>0;j--)
            {
                if(nums[j]<nums[j-1])
                {
                    swap(nums[j],nums[j-1]);
                }
                else
                    break;
            }
        }

        cout<<"OK"<<endl;
    }
};
//
int main()
{
    Solution S;
    vc v = {5, 1, 2, 36, 8, 9};
    S.isort(v, 0, 5);
    return 0;
}
