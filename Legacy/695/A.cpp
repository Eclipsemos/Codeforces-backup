#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 0x3f3f3f3f;

void solve()
{
    ll d;
    cin >> d;
    string sum="9";
    if (d == 1)
    {
        cout << sum << endl;
    }
    else
    {
        int dig_curr=8;
        for(ll i=0;i<d-1;i++)
        {
            sum.append(to_string(dig_curr));
            dig_curr=(dig_curr+1)%10;
        }
        cout<<sum<<endl;
    }
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