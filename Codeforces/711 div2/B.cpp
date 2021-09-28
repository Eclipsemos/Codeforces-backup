#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll llinf = 4223372036854775807;

////////////////////////////////////////////////
void solve()
{
  ll n;
  ll w;
  cin >> n >> w;
  vector<ll> arr(n, 0);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr.begin(), arr.end());
  ll f[w + 1];
  int book[n+1];
  memset(f, 0, sizeof(f));
  memset(book, 0, sizeof(book));
  int step = 0;
  int used=0;
  while(used!=n)
  {
    memset(f, 0, sizeof(f));
    for (int i = 0; i < n; i++)
      for (int l = w; l >= arr[i]; l--)
      {
        //f[l] = max(f[l], f[l - arr[i]] + arr[i]);
        if (f[l] < f[l - arr[i]] + arr[i]&&book[i]==0)
        {
          f[l] = f[l - arr[i]] + arr[i];
        }
      }
    int space =w;
    for(int i=n-1;i>=0;i--)
    {
      if(book[i]==0)
      if(space>=arr[i]&&f[space]>=f[space-arr[i]])
      {
        used++;
        book[i]=1;
        space-=arr[i];
      }
    }
  step++;
  }
  cout << step << endl;
}

int main()
{
  int number = 0;
  cin >> number;
  for (ll i = 0; i < number; i++)
    solve();
  return 0;
}