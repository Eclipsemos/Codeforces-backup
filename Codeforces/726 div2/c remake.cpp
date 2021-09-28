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
    cin >> n;
    vector<int> arr(n, 0);
    if(n==2)
    {
        int a,b;
        cin>>a;
        cin>>b;
        if(a>b)
        cout<<b<<" "<<a<<endl;
        else
        cout<<a<<" "<<b<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int i1 = 0;
    int i2 = 1;
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            if (arr[i2] - arr[i1] > arr[i] - arr[i - 1])
            {
                i2 = i;
                i1 = i - 1;
            }
        }
    }
    for (int i = i2; i < n; i++)
        cout << arr[i] << " ";
    for (int i = 0; i <= i1; i++)
        cout << arr[i] << " ";
    cout << endl;
    return;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
