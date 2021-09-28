#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class DetectSquares
{
public:
    vector<vector<int>> p;
    int mat[500][500];
    DetectSquares()
    {
        p.clear();
        memset(mat,0,sizeof(mat));
    }

    void add(vector<int> point)
    {
        p.push_back(point);
        mat[point[0]][point[1]]++;
    }

    int count(vector<int> point)
    {
       int ans=0;
       for(int i=0;i<p.size();i++)
       {
           if(p[i]!=point)
           {
               int x1=p[i][0];
               int y1=p[i][1];
               int x2=point[0];
               int y2=point[1];
            if(mat[x1][y2]!=0&&mat[x2][y1]!=0&&abs(x1-x2)==abs(y1-y2)&&x1!=x2)
            {

                int incr = mat[x1][y2]*mat[x2][y1];
                // if(mat[x2][y2]!=0)
                //  incr*=mat[x2][y2];
                ans+=incr;
            }
           }
       }
       return ans;
    }
};
//
int main()
{
    DetectSquares S;

    DetectSquares *obj = new DetectSquares();
/*
add","add","add","count","add","add","add","count","add","add","add","count","add","add","add","count"]
[[],
[[5,10]],[[10,5]],[[10,10]],[[5,5]],
[[3,0]],[[8,0]],[[8,5]],[[3,5]],
[[9,0]],[[9,8]],[[1,8]],[[1,0]],
[[0,0]],[[8,0]],[[8,8]],[[0,8]]]
*/
    vc v1={5,10};vc v2={10,5};vc v3={10,10};vc v4={5,5};
    vc v5={3,0};vc v6={8,0};vc v7={8,5};vc v8={3,5};
    vc v9={9,0};vc v10={9,8};vc v11={1,8};vc v12={1,0};
    vc v13={0,0};vc v14={8,0};vc v15={8,8};vc v16={0,8};
    obj->add(v1);obj->add(v2);obj->add(v3);
    obj->add(v5);obj->add(v6);obj->add(v7);
    obj->add(v9);obj->add(v10);obj->add(v11);
    obj->add(v13);obj->add(v14);obj->add(v15);
    cout<<obj->count(v16);
    return 0;
}
