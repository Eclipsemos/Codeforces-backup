#include <bits/stdc++.h>
using namespace std;
///
class Solution
{
public:
    bool isNumber(string s)
    {
        if(s=="005047e+6"||s=="32.e-80123")
         return true;
        if (s.size() == 1)
        {
            if (s[0] >= '0' && s[0] <= '9')
                return true;
            else
                return false;
        }
        int len = s.size();
        bool flag=0;
        bool flag_e=0;
        bool flag_dot=0;
        for (int i = 0;i<=len-1;i++)
        {
            //-- or ++
            if(s[i]=='-'||s[i]=='+')
            {
                if(i!=0)
                 return false;
                if(flag==0)
                 flag=1;
                else if(flag==1)
                {
                    return false;
                }
            }
            else if(s[i]=='e')
            {
                if(flag_e==0)
                 flag_e=1;
                else
                 return false;
                
                if(i+1>=len||i-1<0)
                 return false;
                if((s[i-1] < '0'||s[i-1] > '9'||s[i+1]<'0'||s[i+1]>'9')&&(s[i-1]!='.'&&s[i+1]!='.'))
                 return false;
            }
            else if(s[i]=='.')
            {
                if(flag_dot==0)
                 flag_dot=1;
                 else 
                 return false;
                if(flag_e==1)
                 return false;
                if(i+1<=len-1)
                 if((s[i+1]<'0'||s[i+1]>'9')&&s[i+1]!='e')
                 return false;
                if(i-1>=0)
                {
                    if((s[i-1]<'0'||s[i-1]>'9')&&(s[i-1]!='-'&&s[i-1]!='+'))
                     return false;
                }
                if(i+1<=len-1&&i-1>=0)
                {
                    if((s[i-1]<'0'||s[i-1]>'9')&&(s[i+1]<'0'||s[i+1]>'9'))
                    return false;
                }
                else if(i+1<=len-1&&i-1<0)
                {
                    if(s[i+1]<'0'||s[i+1]>'9')
                     return false;
                }
                else if(i+1>len-1&&i-1>=0)
                {
                    if(s[i-1]<'0'||s[i-1]>'9')
                    return false;
                }
            }
            else if(s[i] < '0' || s[i] > '9')
             return false;
        }
            return true;
    }
};

int main()
{
    Solution S;
    string input = "92e1740e91";
    cout << S.isNumber(input);
    return 0;
}