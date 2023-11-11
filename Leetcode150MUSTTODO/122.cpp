class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxn=prices[0];
        int minn=prices[0];
        int maxd=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
             maxd+=prices[i]-prices[i-1];
        }
        return maxd ;
    }
};