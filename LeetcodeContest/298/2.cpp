// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class Solution
{
public:
    int minimumNumbers(int num, int k)
    {
        int reminder = num%10;
        if(reminder%2&&!(k%2))
            return -1;
        if(num == 0 )
            return 0;
        map<int,int> mp;
        int copy = 0;
        for(int i=1;i<=10;i++)
        {
            copy += k;
            copy = copy % 10;
            if(mp.count(copy))
                break;
            mp[copy]=i;
        }
        if(mp.count(reminder)==0)
            return -1;
        int goal = mp[reminder];
        if(num>=goal*k)
            return goal;
        else
            return -1;
    }
};
//
int main()
{
    Solution S;
    S.minimumNumbers(1,5);

    return 0;
}
