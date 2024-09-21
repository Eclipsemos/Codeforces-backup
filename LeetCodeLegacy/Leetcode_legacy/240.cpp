//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution 
{
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        vector<vector<int>> ls;
        for(int i=0;i<matrix.size();i++)
        {
            if(target>=matrix[i][0]&&target<=matrix[i][matrix[i].size()-1])
            {
                  ls.push_back(matrix[i]);
                  cout<<i<<endl;
            }
           
            else
             break;
        }
        for(int i=0;i<ls.size();i++)
         for(int j=0;j<ls[i].size();j++)
          {
              cout<<ls[i][j]<<endl;
              if(ls[i][j]==target)
               return true;
          }
        return false;
    }
};
//
int main()
{
    Solution S;
   vc v1={5};
   vc v2={6};
   vector<vector<int>> v;
   v.push_back(v1); v.push_back(v2);
S.searchMatrix(v,6);
    return 0;
 }
