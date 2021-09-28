#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 0x3f3f3f3f;

////////////////////////////////////////////////
int check(ll a, ll b)
{
    int ans = 0;
    while (a)
    {
        a = a / b;
        ans++;
    }
    return ans;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    int ans = MAX;
    ll used = 0;
    if (a < b)
    {
        cout << 1 << endl;
        return;
    }
    if (b == 1)
    {
        used++;
        b++;1
    }
    for(int i=0;i<10000;i++)
    {
        int now = check(a,b)+used;
        ans = min(ans,now);
        used++;
        b++;
    }
    cout<<ans<<endl;
    return;
}

int main()
{
    int number = 0;
    cin >> number;
    for (ll i = 0; i < number; i++)
        solve();
    return 0;
}