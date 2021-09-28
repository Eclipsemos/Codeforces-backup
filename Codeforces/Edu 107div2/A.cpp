#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define re register
//EDGE
#define N 2e+5
int a, b;
int ans = 0;

void solve()
{
    int n;
    cin >> n;
    int curr;
    int ans = 0;
    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (curr == 1)
        {
            ans++;
            if (a > b)
                a++;
            else
                b++;
        }
        else if (curr == 2)
        {
            if (a > b)
                b--;
            else
                a--;
        }
        else if (curr == 3)
        {
            if (a > b)
            {
                if (a >= 0)
                    ans++;
                a++;
            }
            else
            {
                if (b >= 0)
                    ans++;
                b++;
            }
        }
    }
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
