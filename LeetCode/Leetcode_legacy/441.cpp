// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int arrangeCoins(int n)
    {
        double row = floor(sqrt(2)*sqrt(n));
        double max_v = (row+1)/2;
        if(n/row<max_v)
         return row-1;
        else
         return row;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    S.arrangeCoins(2);
    return 0;
}
