// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int doit(vector<int> &piles, int speed)
    {
        int ans = 0;
        for (int p : piles)
        {
            ans += ((p + speed - 1) / speed);
        }
        return ans;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
       
        int MAX_VAL = piles[0];
        for (int c : piles)
            MAX_VAL = max(c, MAX_VAL);
        int m;
        int l = 1, r = MAX_VAL;
        while (l < r)
        {
            m = (l + r) >> 1;
            int used = doit(piles, m);
            if(used>h) //too slow, need to speed up
            {
                l = m+1;
            }
            else //fast enough, try to find the lower one.
            {
                r = m;
            }
        }
        return l;
    }
};
//
int main()
{
    Solution S;
    vc v ={3,6,7,11};
    S.minEatingSpeed(v,8);

    return 0;
}
