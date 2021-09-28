#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l=0;
        int r=nums.size()-1;
        
        while(l<=r)
        {
            int mid = (l+r)/2;
            int curr = nums[mid];
            if(curr == target)
             return mid;
            else if(curr<target)
            {
                 l = mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return -1;
    }
};
//
int main()
{
    Solution S;
    vc nums={-1,0,3,5,9,12};
    cout<<S.search(nums,9)<<endl;
    return 0;
}
