class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int lowest = prices[0];
        int profit = 0;
        for(int i = 1;i<prices.size();i++){
            if(lowest>=prices[i]){
                lowest = prices[i];
            }else{
                if(i==prices.size()-1 || prices[i]>=prices[i+1]){
                    profit += prices[i] - lowest;
                    lowest = prices[i];
                }
            }
        }
        return profit;
    }
};
