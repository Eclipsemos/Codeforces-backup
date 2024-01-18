// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
    {
        vector<vector<int>> ans;
        if(m*n!=original.size())
        {
            return ans;
        }
        for(int i=0;i<m;i++)
        {
            vector<int> curr;
            for(int j=0;j<n;j++)
             curr.push_back(original[1*i+j]);
            ans.push_back(curr);
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
