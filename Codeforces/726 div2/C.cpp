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
    map<int, int> mp;
    vector<int> arr(n, 0);
    int i1 = 0;
    int i2 = n-1;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (n == 1)
    {
        cout << arr[0] << endl;
        return;
    }
    sort(arr.begin(), arr.end());
    int mind=abs(arr[i2]-arr[i1]);
    for(int i=0;i<n;i++)
    {
        if(i>0)
        {
            if(mind>abs(arr[i]-arr[i-1]))
            {
                mind = abs(arr[i]-arr[i-1]);
                 i1=i-1;i2=i;
            }
        } 
    }
    int temp  = arr[n-1];
    arr[n-1] = arr[i1];
    arr[i1] = temp;
    temp = arr[0];
    arr[0] = arr[i2];
    arr[i2] = temp;
    for(int i=0;i<n-1;i++)
     cout<<arr[i]<<" ";
    cout<<arr[n-1]<<endl;
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
