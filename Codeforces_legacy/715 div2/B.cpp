#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define re register int
#define tst cout << 'x' << endl;
//EDGE
#define N 2e+5

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int n1 = 0;
    int n2 = 0;
    int n1_1 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'T')
        {
            n1++;
            n1_1++;
        }
        else if (s[i] == 'M')
        {
            n2++;
            n1_1--;
        }

        if (n1_1 < 0||n1_1>s.size()/3)
        {
            cout << "NO" << endl;
            return;
        }
    }

    if (n1 == 0 || n2 == 0 
    || n1 / n2 != 2 
    || s[0] == 'M' || s[s.size() - 1] == 'M' 
    || n1_1 != n2)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
/*
 TMT TMT
 T TMT MT
 T T M M T T 
*/