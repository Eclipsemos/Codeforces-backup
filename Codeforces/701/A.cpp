#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 0x3f3f3f3f;

////////////////////////////////////////////////
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll steps = 0;

    while (a != 0)
    {
        if (b > a)
        {
            steps++;
            break;
        }

        if(b==a)
        {
            steps+=2;
            break;
        }

        if(b<=2)
        {
            b=b+1;
            
        }
        else
        {
            a=a/b;
        }
        steps++;
        cout<<"STEP#"<<steps<<"a,b: "<<a<<" "<<b<<endl;
    }
    cout << steps << endl;
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