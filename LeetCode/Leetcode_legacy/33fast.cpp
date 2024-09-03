//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    int search(vector<int>& nums, int target) {
       int index=0;
       for(int i=0;i<nums.size();i++)
       {
           if(i!=nums.size()-1)
           if(nums[i]>nums[i+1])
            index =i+1;
           if(target==nums[i])
            return i;
       }
       int l = index;
       int r = nums.size()-1;
       int m= (l+r)/2;
       while(l<r)
       {
           if(nums[m]==target)
           {
               return m;
           }
           if(target>m)
           {
               l++;
           }
           else
           {
               r--;
           }
           m=(l+r)/2;
       }
       return -1;
    }
};
//
int main()
{
    Solution S;
   vc v={1,3};
   cout<<S.search(v,0);

    return 0;
 }
