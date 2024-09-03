#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string smallestGoodBase(string n)
    {
        long numb  = stol(n);
        int mMax = floor(log(numb)/log(2));
        for(int m = mMax;m>1;m--)
        {
            int k = pow(numb,1.0/m);
            long mul = 1, sum =1;
            for(int i=0;i<m;i++)
            {
                mul *= k;
                sum+=mul;
            }
            if(sum==numb)
            {
                return to_string(k);
            }
        }
        return to_string(numb-1);
    }
};

int main()
{
    Solution S;
    return 0;
}