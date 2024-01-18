#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 0x3f3f3f3f;

////////////////////////////////////////////////
void solve()
{
    ll p;
    cin >> p;
    vector<ll> arr(3, 0);
    cin >> arr[0] >> arr[1] >> arr[2];
    ll ans = 0;
    ll minans = 0;
    if (arr[0] == p || arr[1] == p || arr[2] == p)
    {
        cout << 0 << endl;
        return;
    }
    sort(arr.begin(), arr.end());
    if (arr[0] > p)
    {
        cout << arr[0] - p << endl;
        return;
    }
    if (p % arr[0] == 0 || p % arr[1] == 0 || p % arr[2] == 0)
    {
        cout << 0 << endl;
        return;
    }
        for (int i = 0; i < 3; i++)
        {
            ll mod = p % arr[i];
            ans = arr[i] - mod;
            if (i == 0)
                minans = ans;
            if (minans > ans)
                minans = ans;
        }
    cout << minans << endl;
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