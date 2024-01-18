#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 0x3f3f3f3f;

int main()
{
    int n, k;
    cin >> n>>k;
    int pos_a = n;
    int pos_b = 1;
    for (int i = 0; i < k; i++)
    {
        cout << "Time:" << i + 1 << " A:" << pos_a << " B:" << pos_b << endl;
        pos_a--; 
        pos_b++;
        if(pos_b==pos_a)
        {
            pos_b++;
        }
        if(pos_a<=0)
        {
            pos_a=n;
        }
        if(pos_b>n)
        {
            pos_b=1;
        }
    }

    return 0;
}