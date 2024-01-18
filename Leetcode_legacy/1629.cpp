// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    char slowestKey(vector<int> &releaseTimes, string keysPressed)
    {
        int prefx=0;
        int max_time=0;
        char ans;
        for(int i=0;i<releaseTimes.size();i++)
        {
            int curr_time = releaseTimes[i]-prefx;
            if(curr_time>max_time)
            {
                ans = keysPressed[i];
                max_time = curr_time;
            }
            else if(curr_time==max_time)
            {
                if(ans<keysPressed[i])
                 ans = keysPressed[i];
            }
            prefx=releaseTimes[i];
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
