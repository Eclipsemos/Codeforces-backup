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
    vector<ll> arr;
    for (int i = 0; i < n; i++)
    {
        ll curr;
        cin >> curr;
        arr.push_back(curr);
    }
    sort(arr.begin(), arr.end());
    ll mn = -1;
    ll ans=0;
    bool used[n + 1];
    memset(used, 0, sizeof(used));
    int i1 = 0;
    int i2 = 0;
    int num=0;
    ll diff=0;
    while (num<n)
    {
        diff=0;
        mn = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && used[i] == 0 && used[j] == 0)
                {
                       
                    if (mn == -1)
                    {
                        diff = abs(arr[i] - arr[j]);
                        i1 = i;
                        i2 = j;
                        mn = diff;
                    }
                    else if (diff < mn)
                    {
                        i1 = i;
                        i2 = j;
                        mn = diff;
                        
                    }
                }
            }
        }
        cout<<"diff:"<<diff<<endl;
        cout<<"i1:"<<i1<<"i2:"<<i2<<endl;
        num+=2;
        used[i1]=1;
        used[i2]=1;
        ans+=diff;
    }
    cout<<ans<<endl;
    return;
}

int main()
{
    int T = 1;

    while (T--)
        solve();
    return 0;
}
