class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best_buy=prices[0], best_sell=prices[0];
        if(prices.size()==1) return 0;
        vector<int> temp;
        for(int i=1; i<prices.size(); i++){
            if(prices[i]<best_buy){
                temp.push_back(best_sell-best_buy);
                best_buy = prices[i];
                best_sell = prices[i];
            }
            if(prices[i]>best_sell){
                best_sell = prices[i];
            }
        }
        temp.push_back(best_sell-best_buy);
        return *max_element(temp.begin(), temp.end());
    }
};
