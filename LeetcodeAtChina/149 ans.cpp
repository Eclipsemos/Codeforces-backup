#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans = 1;

        for(int i = 0; i < points.size(); i ++){
            unordered_map<long long, int> map;
            for(int j = i + 1; j < points.size(); j ++){    
                // 计算deltaX deltaY
                int x = points[j][0] - points[i][0];
                int y = points[j][1] - points[i][1];

                if(x == 0){ // 斜率不存在的情况
                    map[1e18 + points[j][0]] ++;   // 1e18 = 1e9 * 1e9
                }else{
                    double k = (double) y / x;
                    double b = points[j][1] - k * points[j][0];
                    long long tmp = k * 1e9 + b;    // 合成新的哈希值
                    ++ map[tmp];
                }
            }
            // 统计答案
            for(auto &[i, j] : map)
                ans = max(ans, j + 1);
        }
        return ans;
    }
};

int main()
{
    Solution S;
    vector<int> p1; p1.push_back(1); p1.push_back(1);
    vector<int> p2; p2.push_back(3); p2.push_back(2);
    vector<int> p3; p3.push_back(5); p3.push_back(3);
    vector<int> p4; p4.push_back(4); p4.push_back(1);
    vector<int> p5; p5.push_back(2); p5.push_back(3);
    vector<int> p6; p6.push_back(1); p6.push_back(4);
    vector<vector<int>> p;
    p.push_back(p1); p.push_back(p2); p.push_back(p3);
    p.push_back(p4); p.push_back(p5); p.push_back(p6);
    cout<<S.maxPoints(p);
    return 0;
}
