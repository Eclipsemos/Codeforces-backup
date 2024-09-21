// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
private:
    vector<int> v;
    vector<int> backup;

public:
    Solution(vector<int> &nums)
    {
        v = nums;
        backup = v;
    }

    vector<int> reset()
    {
        v = backup;
        return v;
    }

    vector<int> shuffle()
    {
        vector<int> new_v;
        for(int i=1;i<v.size();i++)
         new_v.push_back(v[i]);
        new_v.push_back(v[0]);
        v = new_v;
        return v;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
//
int main()
{
    vc v = {};
    Solution S(v);
    return 0;
}
