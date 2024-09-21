#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    struct node
    {
        string data;
        int step;
        node(string data,int step):
        data(data),step(step){}
    };
    
    vector<int> dir1={1,0,0,0,-1,0,0,0};
    vector<int> dir2={0,1,0,0,0,-1,0,0};
    vector<int> dir3={0,0,1,0,0,0,-1,0};
    vector<int> dir4={0,0,0,1,0,0,0,-1};

    bool ck(string str)
    {
        for(int i=0;i<=3;i++)
        {
            if(str[i]<48||str[i]>57)
             return false;
        }
        return true;
    }
    int openLock(vector<string> &deadends, string target)
    {
        queue<node> q;
        node n("0000",0);
        unordered_map<string,int> vis;
        for(int i=0;i<deadends.size();i++) 
         vis[deadends[i]]=1;
        q.push(n);
        while(!q.empty())
        {
            node curr = q.front();
            q.pop();
            if(curr.data[0]==target[0]&&curr.data[1]==target[1])
             if(curr.data[2]==target[2]&&curr.data[3]==target[3])
              return curr.step;
            vis[curr.data]=1;
            for(int i=0;i<8;i++)
            {
                char x1=getx(curr.data[0],dir1[i]);
                char x2=getx(curr.data[1],dir2[i]);
                char x3=getx(curr.data[2],dir3[i]);
                char x4=getx(curr.data[3],dir4[i]);
                string news;
                news+=x1;news+=x2;news+=x3;news+=x4;
                if(ck(news)&&vis[news]!=1)
                {
                    vis[news]=1;
                    node next(news,curr.step+1);
                    q.push(next);
                }
            }
        }
        return 1;
    }

    char getx(char x,int offset)
    {
        if(x=='0')
            if(offset==-1)
             return '9';
    
        if(x=='9')
         if(offset==1)
          return '0';
        
        return char(x-'0'+48+offset);

    }
};

int main()
{
    Solution S;
    vector<string> v;
    v.push_back("0201");v.push_back("0101");
    v.push_back("0102");v.push_back("1212");
    v.push_back("2002");
    cout<<S.openLock(v,"0202");
    return 0;
}