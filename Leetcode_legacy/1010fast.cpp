//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) 
    {
        int num[61];
        int res=0;
        memset(num,0,sizeof(num));
        for(int n:time)
        {
            int target =(60-n%60)%60;
            res += num[target];
            num[n%60]++;
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
