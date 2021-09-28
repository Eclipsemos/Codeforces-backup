#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    vector<int> smallestK(vector<int> &arr, int k)
    {
        sort(arr.begin(),arr.end());
        vector<int> res;
        for(int i=0;i<k;i++)
         res.push_back(arr[i]);

         return res;
    }
};
//
int main()
{
    Solution S;
    vc s = {4,3,5,2,2,4,4,1};
    vc res = S.smallestK(s,1);
    return 0;
}
