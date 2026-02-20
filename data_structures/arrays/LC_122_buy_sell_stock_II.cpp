//TC - O(n)
//SC - O(1)
//technique - it's greedy logic, whenever the stock price is greater than previous day, we buy and sell to make max. profit

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        for(int i=1; i<prices.size(); i++){
            if(prices[i] > prices[i-1]){
                profit += prices[i] - prices[i-1];
            }
        }
        return profit;
    }
};
