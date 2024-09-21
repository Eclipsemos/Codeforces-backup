// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int doit(int x, int y)
    {
        if(x==0||y==0)
        {
            return 0;
        }
        if (x >= y)
        {
            return 1 + doit(x - y, y);
        }
        else
            return 1 + doit(x, y - x);
        
    }
    int countOperations(int num1, int num2)
    {
        return doit(num1, num2);
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
