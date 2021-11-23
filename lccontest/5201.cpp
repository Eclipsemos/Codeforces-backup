// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int wateringPlants(vector<int> &plants, int capacity)
    {
        vector<int> pre;
        int curr = 0;
        int n = plants.size();
        long long use=capacity;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(use>=plants[i])
            {
                use-=plants[i];
                ans++;
            }
            else
            {
                use = capacity-plants[i];
                ans+=i*2+1;
            }
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
