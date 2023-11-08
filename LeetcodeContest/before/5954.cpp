// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minimumRefill(vector<int> &plants, int capacityA, int capacityB)
    {
        int n = plants.size();
        vector<int> v1(capacityA+1,0);
        vector<int> v2(capacityB+1,0);
        long long use=capacityA;
        int ans=0;
        vector<int> use1(capacityA+1,0);
        vector<int> used(capacityB+1,0);
        for(int i=0;i<n;i++)
        {
            use1[i]=use;
            if(use>=plants[i])
            {
                use-=plants[i];
            }
            else
            {
                use = capacityA-plants[i];
                ans++;
                v1[i]=1;
            }
            
             
        }
        long long use2=capacityB;
        ans=0;
        for(int i=n-1;i>=0;i--)
        {
            used[i]=use2;
            if(use2>=plants[i])
            {
                use2-=plants[i];
            }
            else
            {
                use2 = capacityB-plants[i];
                ans++;
                v2[i]=1;
            }
            
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(use1[i]>=used[i])
            {
                res += v1[i];
            }
            else
             res+=v2[i];
        }
        return res;
       
    }
};
//
int main()
{
    Solution S;
    vc v={1,2,4,4,5};
    S.minimumRefill(v,6,5);

    return 0;
}
