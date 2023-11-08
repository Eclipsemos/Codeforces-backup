//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
      vector<int> getRow(int rowIndex) 
    {
        vector<vector<int>> ans;
        vector<int> v={1};
        ans.push_back(v);
        for(int i=1;i<=rowIndex;i++)
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
        return ans[rowIndex];
    }
};
//
int main()
{
    Solution S;
   //vc v={};

    return 0;
 }
