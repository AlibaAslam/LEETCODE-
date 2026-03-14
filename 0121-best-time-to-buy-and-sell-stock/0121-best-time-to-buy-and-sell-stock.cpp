class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        vector<int> bestBuy(prices.size());
        bestBuy[0] = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            if (bestBuy[i - 1] < prices[i]) {
                bestBuy[i] = bestBuy[i - 1];
            } else {
                bestBuy[i] = prices[i];
            }
        }

        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++) {
            int currProfit = prices[i] - bestBuy[i];
            maxProfit = max(currProfit, maxProfit);
        }

        return maxProfit;
    }
};