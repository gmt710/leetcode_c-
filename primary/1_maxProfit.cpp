class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i=1; i<prices.size();i++){
            # 计算前后价格差，大于０，就卖出去
            int diff = prices[i] - prices[i-1];
            if(diff > 0)
                profit += diff;
        }
        return profit;
    }
};
