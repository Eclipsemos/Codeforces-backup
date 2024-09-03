#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define re register
//EDGE
#define N 100

void solve()
{ 
    int n;
    cin>>n;
    bool flag=0;
    map<int,int> mp;
    int a=0;
    int a1=0;
    int b=0;
    int b1=0;
    for(int i=0;i<n;i++)
    {
        int curr;
        cin>>curr;
        mp[curr]++;
        if(a==0)
        {
            a=curr;
            a1=i;
        }
        else 
        {
            if(b==0&&curr!=a)
            {
                b=curr;
                b1=i;
            }
        }
    }
    if(mp[a]>mp[b])
    {
        cout<<b1+1<<endl;
    }
    else
    cout<<a1+1<<endl;
    
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
