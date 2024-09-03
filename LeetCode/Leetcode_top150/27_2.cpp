#include <bits/stdc++.h>
using namespace std;
//
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i = 0;
        int ans = 0;
        while (i < nums.size())
        {
            if (nums[i] == val)
            {
                for (int j = i + 1; j < nums.size(); j++)
                {
                    if (nums[j] != val)
                    {
                        nums[i] = nums[j];
                        nums[j] = val;
                        ans++;
                        break;
                    }
                }
            }
            else
            {
                ans++;
            }
            i++;
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    return 0;
}
