//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
    {
        sort(nums1.begin(),nums1.end()); sort(nums2.begin(),nums2.end());
        sort(nums3.begin(),nums3.end()); sort(nums4.begin(),nums4.end());
        map<long long, int> mp;
        for(long long a:nums1)
         for(long long b:nums2)
          mp[a+b]++;
        int ans=0;
        for(long long c:nums3)
         for(long long d:nums4)
         {
             if(mp[-1*(c+d)]>0)
              {
                  ans++;
                  mp[-1*(c+d)]--;
              }
         }
         return ans;
    }
};
//
int main()
{
    Solution S;
    vc v1={1,2};vc v2={-1,-2};vc v3={-1,2};vc v4={0,2};
    S.fourSumCount(v1,v2,v3,v4);

    return 0;
}
