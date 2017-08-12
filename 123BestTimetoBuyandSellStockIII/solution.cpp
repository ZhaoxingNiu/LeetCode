class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //  主要公式：
        //  profit[time][i]= max(profit[time][i-1],prices[i]+max(profit[time-1][j]-prices[j]+prices[i])); 
        //  第一项 表示该项不进行交易  第二项表示  前几次少交易一次  该次卖出 j 买入的
        if(prices.empty()) return 0;
        const int K = 2;
        int N = prices.size();
        vector<vector<int>> profit(K+1,vector<int>(N,0));
        for(int time = 1;time<=K;time++){
            int tmpMax = -prices[0];
            for(int i = 1;i<N;i++){
                profit[time][i]= max(profit[time][i-1],prices[i]+tmpMax);
                tmpMax = max(profit[time-1][i]-prices[i],tmpMax);
            }
        }
        return profit[K][N-1];
    }
};