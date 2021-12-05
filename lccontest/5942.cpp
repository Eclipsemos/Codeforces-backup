// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<int> findEvenNumbers(vector<int> &digits)
    {
        sort(digits.begin(), digits.end());
        vector<int> ans;
        unordered_map<int, int> vis;
        for (int i = 0; i < digits.size(); i++)
        {
            int curr = 0;
            if (digits[i] == 0)
                continue;
            for (int j = 0; j < digits.size(); j++)
            {
                if (i == j)
                    continue;
                for (int k = 0; k < digits.size(); k++)
                {
                    if (k == j || k == i || digits[k] % 2)
                        continue;
                    curr = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if (vis[curr] != 1)
                    {
                        ans.push_back(curr);
                        vis[curr] = 1;
                    }
                }
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    vc v = {2, 2, 8, 8,2};
    S.findEvenNumbers(v);
    return 0;
}
