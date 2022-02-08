// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    bool asteroidsDestroyed(int mass, vector<int> &asteroids)
    {
        sort(asteroids.begin(),asteroids.end());
        for(int curr:asteroids)
        {
            if(mass>=curr)
             mass+=curr;
            else
             return false;
        }
        return true;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
