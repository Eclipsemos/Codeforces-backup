#include <bits/stdc++.h>
using namespace std;
//
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        vector<int> ans;
        int counter = 0;

        for(int v: nums)
        {
            if(v!=val)
            {
                counter++;
                ans.push_back(v);
            }
        }
        
        nums = ans;

        return counter;

    }
};
//
int main()
{
    Solution S;
    return 0;
}
