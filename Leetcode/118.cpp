//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> ans;
        vector<int> v={1};
        ans.push_back(v);
        for(int i=1;i<numRows;i++)
        {
            int size = i+1;
            vector<int> curr;
            curr.push_back(1);
            for(int j=1;j<size-1;j++)
            {
                curr.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
            curr.push_back(1);
            ans.push_back(curr);
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    S.generate(5);

    return 0;
 }
