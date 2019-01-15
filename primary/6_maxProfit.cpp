static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // python：32ms
        // c++：4ms
        // 价格少就买入，利润多，就卖出
        if(prices.size() == 0)
            return 0;
        int buy_price = prices[0];
        int profits = 0;
        for(int i=0; i < prices.size(); i++){
            profits = max(profits, prices[i] - buy_price);
            buy_price = min(buy_price, prices[i]);
        }
        return profits;
    }
};
