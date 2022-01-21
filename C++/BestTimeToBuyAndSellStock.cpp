#include <vector>

using namespace std;

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int minPrice = prices[0];
            int maxProfit = 0;

            for (int i = 1; i < prices[i]; i++) {
                minPrice = min(minPrice, prices[i]);
                int profit = prices[i] - minPrice;
                maxProfit = max(maxProfit, profit);
            }

            return maxProfit;
        }
};