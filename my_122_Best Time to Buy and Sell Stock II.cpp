class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty())
            return 0;
        int curmin = prices[0];
        int curmax = prices[0];
        int maxpf = 0;
        for (int i = 1; i < prices.size(); ++i) {
            if (curmax < prices[i])
                curmax = prices[i];
            else {
                maxpf += curmax - curmin;
                curmax = curmin = prices[i];
            }
        }
        maxpf += curmax - curmin;
        return maxpf;
    }
};
