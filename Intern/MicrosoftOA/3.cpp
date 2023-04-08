// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
int solution(int N)
{
    // write your code in C++14 (g++ 6.2.0)
    int ans = 0;
    for (int i = 1; i <= N; i *= 10)
    {
        // i is cluster size.
        // temp is time period.
        int temp = i * 10;
        // min(max(A%temp-i+1, 0), i) -> this part is going to take care
        // of extra last cluster.
        ans += ((N / temp) * i) + min(max(N % temp - i + 1, 0), i);
    }
    return ans;
}

//
int main()
{
    solution(13);
    // vc v={};

    return 0;
}
