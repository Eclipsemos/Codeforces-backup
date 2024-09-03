#include <bits/stdc++.h>
using namespace std;
//
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int a=0,b=1;
        if(nums.size()==1)
            return 1;
       
        while(b<nums.size())
        {
            if(nums[a]!=nums[b])
            {
                nums[a+1] = nums[b];
                a++;
            }
            b++;
        }

        return a+1;
    }
};
//
int main()
{
    Solution S;
    return 0;
}
