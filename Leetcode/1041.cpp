//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    bool isRobotBounded(string instructions)
    {
        int drx[4] = {0, 1, 0, -1};
        int dry[4] = {1, 0, -1, 0};
        int x = 0;
        int y = 0;
        int dx = 0;
        int dy = 1;
        int di = 0;

        for (char c : instructions)
        {
            if (c == 'L' || c == 'R')
            {
                if (c == 'L')
                {
                    di--;
                    if (di < 0)
                        di = 3;
                }
                else
                {
                    di++;
                    if (di > 3)
                        di = 0;
                }
                dx = drx[di];
                dy = dry[di];
            }
            else
            {
                x += dx;
                y += dy;
            }
        }
            if((x==0&&y==0)||(di!=0))
            {
            return false;
            }
            else
            return true;
    }
};
//
int main()
{
    Solution S;
    //vc v={};

    return 0;
}
