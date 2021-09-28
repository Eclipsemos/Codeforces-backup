#include <bits/stdc++.h>
using namespace std;

//#prob1 Easy
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans(2, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            int curr = nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                if ((nums[i] + nums[j]) == target)
                {

                    ans[0] = i;
                    ans[1] = j;
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution a;
    return 0;
}