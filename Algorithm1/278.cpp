//Eclipsemos UWMADISON CS 2023
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution {
public:
    int firstBadVersion(int n) 
    {
        int l = 1, r = n;
        while(l<=r)
        {
            int m = l+(r-l)/2;
            if(!isBadVersion(m))
            {
                l = m+1;
            }
            else
            {
                r = m-1;
            }
        }
        return l;
    }
};
//
int main()
{
    Solution S;
   //vc v={};

    return 0;
 }
