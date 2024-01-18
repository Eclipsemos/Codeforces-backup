//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minOperations(vector<vector<int>> &grid, int x)
    {
        vector<int> arr;
       for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
            {
                arr.push_back(grid[i][j]);
                cout<<grid[i][j]<<endl;
            }
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int mid = arr[n/2];
        long long res=0;
        for(int i=0;i<n;i++)
        {
            
            if(i!=0&& (arr[i]-arr[i-1])%x!=0)
            {
                return  -1;
            }
            res += abs(arr[i]-mid)/x;
        }
        return res;
    }
};
//
int main()
{
    Solution S;
    //vc v={};
   
    return 0;
}
