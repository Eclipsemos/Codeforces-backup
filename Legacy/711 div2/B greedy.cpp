#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll llinf = 4223372036854775807;

////////////////////////////////////////////////
void solve()
{
  int n, width, w;
  cin >> n >> width;
  vector<int> counts(20);
  for (int i = 0; i < n; i++)
  {
    cin >> w;
    counts[log2(w)]++;
  }
  int height = 1, space_left = width;
  for (int iter = 0; iter < n; iter++)
  {
    int largest = -1;
    for (int size = 19; size >= 0; size--)
    {
      if (counts[size] and (1 << size) <= space_left)
      {
        largest = size;
        break;
      }
    }
    if (largest == -1)
    {
      space_left = width;
      height++;
      for (int size = 19; size >= 0; size--)
      {
        if (counts[size] and (1 << size) <= space_left)
        {
          largest = size;
          break;
        }
      }
    }
    counts[largest] -=1;
    space_left -= 1 << largest;
  }
  cout << height << endl;
}
////
int main()
{
  int number = 0;
  cin >> number;
  for (ll i = 0; i < number; i++)
    solve();
  return 0;
}