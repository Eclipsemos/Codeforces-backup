//Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class StockPrice
{
public:
    vector<int> prices;
    map<int, int> time;
    int num;
    int maxn=0;
    set<int> timeused;
    //
    StockPrice()
    {
        num = -1;
        prices.clear();
        time.clear();
        timeused.clear();
    }

    void update(int timestamp, int price)
    {
        if (timeused.count(timestamp)!=0)
        {
            prices[time[timestamp]] = price;
        }
        else
        {
            num++;
            time[timestamp] = num;
            prices.push_back(price);
            timeused.insert(timestamp);
        }
        maxn = max(maxn,timestamp);
    }

    int current()
    {
        return prices[time[maxn]];
    }

    int maximum()
    {
        vector<int> cp = prices;
        sort(cp.begin(), cp.end());
        return cp[cp.size() - 1];
    }

    int minimum()
    {
        vector<int> cp = prices;
        sort(cp.begin(), cp.end());
        return cp[0];
    }
};
//
int main()
{
    StockPrice *obj = new StockPrice();
    obj->update(1,10);
    obj->update(1,3);
    //vc v={};

    return 0;
}
