#include <bits/stdc++.h>
using namespace std;

class Solution
{ 
  vector<string> ans;
public:
    vector<string> readBinaryWatch(int turnedOn)
    {
        //int h<=3, int min<=5
        if(turnedOn>=9)
         return ans;
        vector<int> arr(6,0);
        numChange(arr);
        int h=0;int m=0;
        dfs(arr,0,0,0,turnedOn);
        return ans;
    }

private:
    void numChange(vector<int>& arr)
    {
        for(int i=0;i<arr.size();i++)
         arr[i] = 1<<i;
    }
 
    void dfs(vector<int>arr, int s, int h, int m, int total)
    {
        if(h>=12||m>=60)
         return;
        if(total==0)
         {
             if(m<10)
              ans.push_back(to_string(h)+":0"+to_string(m));
            else
              ans.push_back(to_string(h)+":"+to_string(m));
            if(h==1)
             cout<<"here"<<endl;
            return;
         }
         else
         {
             for(int i=s;i<10;i++)
             {
                 if(i<6)
                 {
                     m+=arr[i];
                     dfs(arr,i+1,h,m,total-1);
                     m-=arr[i];
                 }
                 else
                 {
                     h+=arr[i-6];
                     dfs(arr,i+1,h,m,total-1);
                     h-=arr[i-6];
                 }
                 
             }
         }
         
    }
};

int main()
{
    Solution S;
    vector<string> ans = S.readBinaryWatch(1);
    return 0;
}