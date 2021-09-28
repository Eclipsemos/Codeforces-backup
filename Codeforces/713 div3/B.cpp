#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define re register
//EDGE
#define N 400
int arr[401][401];

void solve()
{
    int n;
    cin >> n;
    int x1 = 401;
    int y1 = 401;
    int x2, y2;
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            char curr;
            cin >> curr;
            if (curr == '.')
                arr[i][j] = 0;
            else if (curr = '*')
            {
                arr[i][j] = 1;
                if (x1 == 401)
                {
                    x1 = i;
                    y1 = j;
                }
                else
                {
                    x2 = i;
                    y2 = j;
                }
            }
        }
    if (x1 == x2 || y1 == y2)
    {
        if (x1 == x2)
        {
            if(x1-1>=0)
            {
                arr[x1-1][y1]=1;
                arr[x2-1][y2]=1;
            }
            else if(x1+1<n)
            {
                arr[x1+1][y1]=1;
                arr[x2+1][y2]=1;
            }
        }
        else if(y1==y2)
        {
            if(y1-1>=0)
            {
                arr[x1][y1-1]=1;
                arr[x2][y1-1]=1;
            }
            else if(y1+1<n)
            {
                arr[x1][y1+1]=1;
                arr[x2][y2+1]=1;
            }
        }
    }
    else 
    {
     arr[x2][y1]=1;
     arr[x1][y2]=1;
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==0)
            {
                cout<<".";
            }
            else if(arr[i][j]==1)
            {
                cout<<"*";
            }
        }
        cout<<endl;
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
