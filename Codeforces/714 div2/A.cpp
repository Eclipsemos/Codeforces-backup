#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define re register
#define tst cout<<"here"<<endl;
//EDGE
#define N 101

void solve()
{
    int n, k;
    int mx;
    cin >> n >> k;
    if (n%2!=0)
        mx = n / 2;
    else
        mx = n / 2 - 1;
    if(k>mx)
    {
       cout<<-1<<endl;
       return; 
    }
    //
    int unused=n-k+1;
    vi ins(k,0);
    for(int i=0;i<k;i++)
     {
        ins[i]=unused;
        unused++;
     }
     int curr=ins.size()-1;
     
     for(int i=1;i<=n-k;i++)
     {
        cout<<i<<" ";
        if(curr>=0)
        {
            cout<<ins[curr]<<" ";
            curr--;
        }
     }
     cout<<endl;
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
