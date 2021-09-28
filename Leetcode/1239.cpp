#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  
    int maxLength(vector<string> &arr)
    {
        vector<string> choosen;
        for(string s:arr)
        {
            int use=0;
            int flag=0;
            for(char c:s)
            {
                int i = c-'a';
                if(use&(1<<i))
                {
                    flag=1;
                    break;
                }
                use |= (1<<i);
            }
            if(flag!=1)
             choosen.push_back(s);
            
        }
        int record = 0; 
        return dfs(choosen,0,);
    }
    int dfs(vector<string> &arr,int index)
    {
        if(index==arr.size())
         return 0;
        int len = arr[index].size();
        int 
    }
};

int main()
{
    Solution S;
    vector<string> arr = {"unu","iq","ue"};
    cout << S.maxLength(arr);
    return 0;
}