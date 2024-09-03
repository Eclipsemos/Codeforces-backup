#include <bits/stdc++.h>
using namespace std;
//
class Solution {
public:
    int work(vector<int>& nums, int k) {
        int len = 0;
        for(auto num : nums)
            if(len < k || nums[len-k] != num)
                nums[len++] = num;
        return len;
    }
    int removeDuplicates(vector<int>& nums) {
        return work(nums, 2);
    }
};


int main()
{
 Solution S;
 return 0;
}
