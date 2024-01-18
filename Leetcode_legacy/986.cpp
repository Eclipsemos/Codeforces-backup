// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>> &firstList, vector<vector<int>> &secondList)
    {
       vector<vector<int>> ans;
       for(int i=0;i<firstList.size();i++)
       {
           for(int j=0;j<secondList.size();j++)
           {
               
               int x1 = firstList[i][0];
               int x2 = secondList[j][0];
               int y1 = firstList[i][1];
               int y2 = secondList[j][1];
               if(x2>y1)
                 break;
               if(y2>=x1)
               {
                   int ans1 = max(x1,x2);
                   int ans2 = min(y1,y2);
                   vector<int> here = {ans1,ans2};
                   ans.push_back(here);
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
    // vc v={};

    return 0;
}
