#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100201;
////////////////////////////////////////////////
//m>0
//s>=0
//c>=0 c<m
ll a[N];
void solve()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int flag = 1;
  ll b = 1, c = -1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] - a[i - 1] >= 0)
    {
      if (c == -1)
        c = a[i] - a[i - 1];
      else
      {
        if (c != a[i] - a[i - 1])
        {
          flag = 0;
          break;
        }
      }
    }
    else if (a[i] - a[i - 1] < 0)
    {
      if (b == 1)
        b = a[i] - a[i - 1];
      else
      {
        if (b != a[i] - a[i - 1])
        {
          flag = 0;
          break;
        }
      }
    }
  }

  if (flag == 1)
  {
    b = -b;
    ll m = b + c;
    if (c == -1 || b == -1 || (c == 0 && b == 0))
      cout << "0" << endl;
    else
    {
      sort(a, a + n);
      if (m <= a[n - 1])
        cout << "-1" << endl;
      else
      {
        cout << m << " " << c << endl;
      }
    }
  }
  else
  {
    cout << "-1" << endl;
  }
  return;
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