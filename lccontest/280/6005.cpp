// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        map<int, int> mp1;
        map<int, int> mp2;
        int n = nums.size();
        int max_1 = 0, c1 = 0;
        int max_2 = 0, c2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            mp1[nums[i]]++;
            max_1 = max(max_1, mp1[nums[i]]);
            c1 = nums[i];
        }
        for (int i = 1; i < n; i += 2)
        {
            mp2[nums[i]]++;
            max_2 = max(max_2, mp2[nums[i]]);
            c2 = nums[i];
        }
        if (c1 == c2)
        {
            
        }
        return 0;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
