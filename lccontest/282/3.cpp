// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    long long minimumTime(vector<int> &time, int totalTrips)
    {
        sort(time.begin(), time.end());
        int n = time.size();
        long long r = time[0] * totalTrips;
        long long l = 1;
        long long mid;
        int ans = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            long long cost = 0;
            for (int c : time)
            {
                if(mid<c)
                 break;
                cost += mid/c;
            }
            if(cost<totalTrips)
            {
                l = mid+1; 
            }
            else if(cost>totalTrips)
            {
                r = mid-1;
            }
        }
        return l;
    }
};

int main()
{
    Solution S;
    vc v = {1, 2, 3};
    S.minimumTime(v, 5);

    return 0;
}
