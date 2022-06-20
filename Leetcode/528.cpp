// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
private:
    vector<int> W;
public:
    Solution(vector<int> &w)
    {
        partial_sum(w.begin(),w.end(),back_inserter(W));
    }

    int pickIndex()
    {
        int weight = rand() % W.back();// prev[i]-w[i]+1
        return upper_bound(W.begin(),W.end(),weight)-W.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
