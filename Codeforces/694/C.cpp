#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 0x3f3f3f3f;

void solve()
{
    ll n, m;
    vector<ll> f, g;
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        ll item;
        cin >> item;
        f.push_back(item);
    }
    for (ll i = 0; i < m; i++)
    {
        ll item;
        cin >> item;
        g.push_back(item);
    }
    //  reading finished
    sort(f.begin(), f.end(), greater<ll>());
    ll pointer = 0;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        if (pointer <= f[i] - 1)
        {
            sum += g[pointer];
            pointer++;
        }
        else
        {
            sum += g[f[i] - 1];
        }
    }
    cout << sum << endl;
    return;
}

int main()
{
    ll number = 0;
    cin >> number;
    for (size_t i = 0; i < number; i++)
        solve();
    return 0;
}