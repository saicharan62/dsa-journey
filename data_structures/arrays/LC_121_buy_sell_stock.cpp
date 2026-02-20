//TC - O(n)
//SC - O(1)
//technique - at every iteration, we check for min. stock price and make the profit maximum.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_p = prices[0];
        int max_pr = 0;

        for (int i = 1; i < prices.size(); i++) {
            min_p = min(min_p, prices[i]);
            max_pr = max(max_pr, prices[i] - min_p);
        }

        return max_pr;
    }
};
