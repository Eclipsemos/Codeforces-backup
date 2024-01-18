//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    
    bool stoneGameIX(vector<int> &stones)
    {
       int arr[3]={0,0,0};
       for(int i=0;i<stones.size();i++)
        arr[stones[i]%3]++;
       arr[0]%=2;
      if(arr[0]==0)
       return arr[1]&&arr[2];
      else
      return abs(arr[1]-arr[2])>2;
    }
};
//
int main()
{
    Solution S;
    //vc v={};

    return 0;
}
