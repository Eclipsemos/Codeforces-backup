// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int n = nums.size();
        map<int,int> mp1;
        map<int,int> mp2;
        int a1 = 0, a2 = 0, b1 = 0, b2 =0;
        for(int i=0;i<n;i+=2) {
            mp1[nums[i]]++;
            if(mp1[nums[i]]>a1) {
                a1 = mp1[nums[i]];
                b1 = mp2[nums[i]];
            }
        }
        for(int i=1;i<n;i+=2) {
            mp2[nums[i]]++;
        }
        return 0;
    }
};
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
