class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int lowest = prices[0];
        int maxPro = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<=lowest){
                lowest = prices[i];
            }else{
                int profit = prices[i]-lowest;
                if(profit>maxPro) maxPro = profit;
                
            }
        }
        return maxPro;
    }
};