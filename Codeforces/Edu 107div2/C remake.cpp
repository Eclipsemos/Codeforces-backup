//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define re register
//EDGE
#define N 3e+5 
#define tst cout<<"here"<<endl;

void solve()
{
    int n,q;
    cin>>n>>q;
    int fr[52];
    int arr[300001];
    memset(fr,-1,sizeof(fr));
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(fr[arr[i]]==-1)
         fr[arr[i]]=i;
    }
    int curr=0; 
    for(int i=1;i<=q;i++)
    { 
        cin>>curr;
        cout<<fr[curr]<<" ";
        for(int j=1;j<=50;j++)
        {
            if(j==curr) continue;
            if(fr[j]<fr[curr]) fr[j]++;
        }
        fr[curr]=1;
    }
    return;
}

int main()
{
 solve();
 return 0;
}
