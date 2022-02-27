// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &D, int X)
{
    ll ans=0;
    ll n =D.size();
    vector<ll> l;
    for(int i=0;i<n;i++)
    {
        
        if(l.size()>0)
        {
            sort(l.begin(),l.end());
            ll min_v = l[0];
            ll max_v = l[l.size()-1];
            if(abs(min_v-D[i])<=X&&abs(max_v-D[i])<=X)
            {
                l.push_back(D[i]);
            }
            else
            {
                l.clear();
                l.push_back(D[i]);
                ans++;
            }
        }
        else
        {
            l.push_back(D[i]);
            ans++;
        }
    }
    return ans;
}

//
int main()
{

    vc v={1, 12, 10, 4, 5, 2};
    solution(v,3);

    return 0;
}
