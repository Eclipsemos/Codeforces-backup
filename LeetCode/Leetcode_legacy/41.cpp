#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        for (int i = 1; i <= 300; i++)
        {
            if (!m[i])
            {
                return i;
                break;
            }
        }
        return 0;
    }
};

int main()
{
    Solution S;
    return 0;
}