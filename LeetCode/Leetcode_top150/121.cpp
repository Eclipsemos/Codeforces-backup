class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int small = prices[0];
        int max_v = 0;
        for(int i=1;i<prices.size();i++)
        {
            int curr = prices[i]-small;
            max_v = max(max_v,curr);
            small = min(small,prices[i]);
        }
        return max_v;
    }
};