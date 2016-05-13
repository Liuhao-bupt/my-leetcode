class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int maxfit = 0;
        for (auto i = 0; i != prices.size(); ++i){
            minprice = (minprice > prices[i] ? prices[i] : minprice);
            maxfit = (maxfit > (prices[i] - minprice) ? maxfit : (prices[i] - minprice));
        }
        return maxfit;
    }
};
