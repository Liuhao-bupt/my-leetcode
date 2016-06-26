class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0 || prices.size() == 1)
            return 0;
        else if (prices.size() == 2)
            return (prices[1] > prices[0] ? prices[1] - prices[0] : 0);
        else {
        vector<int> sell(prices.size(), 0);
        vector<int> buy(prices.size(), 0);
        buy[0] = -prices[0];
        buy[1] = -prices[1];
        sell[1] = prices[1] - prices[0];
        for (int i = 2; i < prices.size(); ++i) {
            int delta = prices[i] - prices[i - 1];
            sell[i] = max(buy[i - 1] + prices[i], sell[i - 1] + delta);
            buy[i] = max(sell[i - 2] - prices[i], buy[i - 1] - delta);
        }
        sort(sell.begin(), sell.end());
        return sell[prices.size() - 1];}
    }
};
