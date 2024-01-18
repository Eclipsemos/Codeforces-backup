#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define re register int
#define tst cout << 'x' << endl;
//EDGE
#define N 2e+5

bool ck(ll ai, ll aj, int i, int j)
{
    if ((ai * aj) == (i + j))
        return true;
    return false;
}
void solve()
{
    int len;
    cin >> len;
    vector<ll> arr(len, 0);
    map<ll,int> mp;
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
        mp[arr[i]]=i+1;
    }
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if((arr[i]*arr[j])==mp[arr[i]]+mp[arr[j]])
        }
    }
    int ans = 0;
    cout << ans << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
