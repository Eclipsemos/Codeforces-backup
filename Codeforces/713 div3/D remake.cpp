#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define re register
//EDGE
#define N 2e+5

void solve()
{
    int n;
    cin >> n;
    re int m = n + 2;
    int arr[m+1];
    int pre[m+1];
    arr[0]=0;
    pre[0]=0;
    for(int i=1;i<=m;i++)
        cin>>arr[i];
    sort(arr+1,arr+m+1);
    for(int i=1;i<=m;i++)
     pre[i]=arr[i]+pre[i-1];
    if(pre[n]==arr[n+2]||pre[n]==arr[n+1])
    {
        for(int i=1;i<=n;i++)
         cout<<arr[i]<<" ";
        cout<<endl;
        return;
    }
    for(int i=1;i<=n+1;i++)
    {
        if(pre[n+1]-arr[i]==arr[n+2])
        {
            for(int j=1;j<=n+1;j++)
            {
                if(i!=j)
                 cout<<arr[j]<<" ";
            }
            cout<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
