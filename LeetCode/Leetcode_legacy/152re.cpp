// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int a[10001];
        int b[10001];
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        ///
        a[0]=nums[0]; b[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            a[i]=max(nums[i],a[i-1]*nums[i]);
            a[i]=max(a[i],b[i-1]*nums[i]);
            b[i]=min(nums[i],b[i-1]*nums[i]);
            b[i]=min(b[i],a[i-1]*nums[i]);
        }
       return *max_element(a,a+nums.size());
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
