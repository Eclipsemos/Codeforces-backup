#include <bits/stdc++.h>
using namespace std;
//easy
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int ans=0;
        int sz = nums.size();
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }

        for(int i=0;i<=sz;i++)
        {
            if(!m[i])
            {
                ans=i;
                break;
            }
        }
        return ans;
    }  
};

int main()
{
    Solution S;
    return 0;
}