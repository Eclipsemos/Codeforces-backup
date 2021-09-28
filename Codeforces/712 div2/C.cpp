#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define N 2e+5

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> arr(n, 0);
    int n0 = 0;
    int n1 = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] = s[i] - '0';
        if (arr[i] == 1)
            n1++;
        else
            n0++;
    }

    if (n1 % 2 != 0 || n0 % 2 != 0 || arr[0] == 0 || arr[n - 1] == 0)
    {
        cout << "NO" << endl;
        return;
    }
    string ans1 = s;
    // build first string
    int right = 1;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            ans1[i] = '(';
            continue;
        }
        else if (i == n - 1)
        {
            ans1[n - 1] = ')';
            break;
        }

        if (arr[i] == 0)
        {
            if (right)
            {
                ans1[i] = ')';
                right = 0;
            }
            else
            {
                ans1[i] = '(';
                right = 1;
            }
        }
    }
    right = 0;
    for (int i = 0; i < ans1.size(); i++)
    {
        if (ans1[i] == '1')
        {
            if (!right)
            {
                ans1[i] = '(';
                right = 1;
            }
            else
            {
                ans1[i] = ')';
                right = 0;
            }
        }
    }
    string ans2;
    for (int i = 0; i < ans1.size(); i++)
    {
        if (!arr[i])
        {
            if (ans1[i] == '(')
                ans2 += ')';
            else
                ans2 += '(';
        }
        else
         ans2+=ans1[i];
    }

    cout << "YES" << endl;
    cout<<ans1<<endl;
    cout<<ans2<<endl;

    /*

1001


*/
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}