#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7
int rand7()
{
    return rand();
}


class Solution
{
public:
    int rand10()
    {    
        int row,col,idx;
        do
        {
            row = rand7();
            col = rand7();
            idx = col+(row-1)*7;
        }while(idx>40);
        return (idx-1)%10+1;
    }
};
int main()
{
    Solution S;
    cout<<S.rand10(); 
    return 0;
}
