// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class RangeFreqQuery
{
private: 


    vector<int> v;
    map<int,vector<int>> mp;
public:
    RangeFreqQuery(vector<int> &arr)
    {
        for(int i=0;i<arr.size();i++)
        {
            v.push_back(arr[i]);
            mp[arr[i]].push_back(i);
        }
    }

    int query(int left, int right, int value)
    {
        if(!mp.count(value))
         return 0;
        auto &val = mp[value];
        auto r = upper_bound(val.begin(),val.end(),right);
        auto l = upper_bound(val.begin(),val.end(),left-1);

        return r-l;
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */
//
int main()
{
    vc v = {12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56};
    RangeFreqQuery r(v);
    r.query(0,11,33);
    return 0;
}
