class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //  ��Ҫ��ʽ��
        //  profit[time][i]= max(profit[time][i-1],prices[i]+max(profit[time-1][j]-prices[j]+prices[i])); 
        //  ��һ�� ��ʾ������н���  �ڶ����ʾ  ǰ�����ٽ���һ��  �ô����� j �����
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