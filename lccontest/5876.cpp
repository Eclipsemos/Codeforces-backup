#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int sumOfBeauties(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> lmax(n,0); lmax[0]=nums[0];
        vector<int> rmin(n,0); rmin[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            lmax[i]=max(lmax[i-1],nums[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            rmin[i] = min(rmin[i+1],nums[i+1]);
        }
        int res=0;
        for(int i=1;i<=n-2;i++)
        {
            if(nums[i]>lmax[i]&&nums[i]<rmin[i])
             res+=2;
            else if 
            (nums[i]>nums[i-1]&&nums[i]<nums[i+1])
             res++;
        }
        return res;
        //2 1 3 4
    }
};
//
int main()
{
    Solution S;
    vc v = {2,4,6,4};
    cout << S.sumOfBeauties(v);
    return 0;
}
