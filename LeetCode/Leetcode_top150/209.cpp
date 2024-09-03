//Eclipsemos UWMADISON CS 2023
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = nums.size();
        int ans = INT_MAX;
        int sum = nums[0];
        int i = 0;
        int j = 0;
        
        while(i<len)
        {
            cout<<i<<" "<<j<<" "<<endl;
            while(sum<target)
            {
                if(j==len-1)
                {
                    break;
                }
                j++;
                sum+=nums[j];
            }
            if(sum>=target)
            {
                while(sum>=target)
                {
                    ans = min(ans,j-i+1);
                    sum-=nums[i];
                    i++;
                }
            }
            else
                i++;
        }

        return ans == INT_MAX ? 0:ans;
    }
};
//
int main()
{
    Solution S;
   vc v={2,3,1,2,4,3};
   S.minSubArrayLen(7, v);

    return 0;
 }
