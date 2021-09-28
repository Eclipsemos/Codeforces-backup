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
    cin>>n;
    int m=n+2;
    vi b(m,0);
    vi a(m,0);
    map<int ,int> mp;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        mp[b[i]]++;
    }
    sort(b.begin(),b.end());
    a[0]=b[0];
    for(int i=1;i<m;i++)
    {
        a[i]=a[i-1]+b[i];
    }

    int sum=0;
    int flag=0;
    int count=0;
    int index=0;
    queue<int> q;
    int mx=b[m-1];
    for(int i=0;i<m;i++)
    {

    }

    if(flag)
    {
        while(!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop();
        }
        cout<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    

}

int main()
{
 int T;
 cin >> T;
 while (T--)
 solve();
 return 0;
}
