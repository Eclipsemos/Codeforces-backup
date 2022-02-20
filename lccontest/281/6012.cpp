// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    bool good(int x)
    {
        int digits=0;
        while(x>0) {
            digits +=x%10;
            x=x/10;
        }
        if(digits%2==0)
         return true;
        return false;
    }
    int countEven(int num)
    {
        // pos 1-n
        int ans = 0;
        for (int i = 1; i <= num; i++)
        {
            if (good(i))
                ans++;
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
