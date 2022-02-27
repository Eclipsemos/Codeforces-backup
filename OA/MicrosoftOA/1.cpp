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

int solution(vector<int> &A)
{
    map<int,int> mp;
    for(int t : A)
    {
        mp[t]++;
    }
    for(int i=1;;i++)
    {
        if(!mp.count(i))
        {
            return i;
        }
    }
    return -1;
}

//
int main()
{

    // vc v={};

    return 0;
}
