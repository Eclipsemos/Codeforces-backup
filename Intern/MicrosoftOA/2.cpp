// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
int solution(string A, string B)
{
    map<char, int> mp1, mp2;
    int n = A.size();
    int ans=0;
    for (int i = 1; i <= n; i++) 
    {
        for(int j=0;j<=n-i;j++) 
        {
            int l = j;
            int r = j+i-1;
            mp1.clear();
            mp2.clear();
            for(int a=l;a<=r;a++)
            {
                mp1[A[a]]++;
                mp2[B[a]]++;
            }
            if(mp1==mp2)
            {
                ans++;
            }
        }
    }
    return ans;
}

//
int main()
{

    solution("dBacaAA","caBdaaA");
    // vc v={};

    return 0;
}
