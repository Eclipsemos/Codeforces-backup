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

// 作者：宫水三叶
// 链接：https://leetcode.cn/problems/remove-duplicates-from-sorted-array-ii/solutions/1/gong-shui-san-xie-guan-yu-shan-chu-you-x-glnq/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
//
int main()
{
 Solution S;
 return 0;
}
