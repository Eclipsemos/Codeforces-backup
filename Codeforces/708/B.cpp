#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 1002001

void solve()
{
    int ans=0;
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int curr;
        cin>>curr;
        mp[curr%m]++;
    }
    if(mp[0])
    ans++;
    for(int i=1;i<m;i++)
    {
        if(!mp[i]&&!mp[m-i])
         continue;
        if(mp[i]&&mp[m-i])
        {
            if(abs(mp[i]-mp[m-i])<=1)
             ans++,mp[m-i]=0;
            else ans+= abs(mp[i]-mp[m-i]),mp[m-i]=0;
        }
        else if(mp[i]&&!mp[m-i])
        ans+=mp[i];
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}