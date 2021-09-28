#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution 
{
public:
    int chalkReplacer(vector<int> &chalk, int k)
    {
        int size = chalk.size();
        if(k<chalk[0]||size==1)
         return 0;
        for(int i=1;i<size;i++)
        {
            chalk[i]+=chalk[i-1];
            if(chalk[i]>k)
             return i;
        }
        k %= chalk.back();
     
       
        return  upper_bound(chalk.begin(),chalk.end(),k)-chalk.begin();
         
    }
};
//
int main()
{
    Solution S;

    return 0;
 }
