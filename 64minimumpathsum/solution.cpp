//重点理解边界情况
//其实也可以把第一行第一列设置为最大值
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> res(m+1,vector<int>(n+1,0));
        res[1][1] =  grid[0][0];
        for(int i=1;i<=m;i++){
            res[i][1] = res[i-1][1]+ grid[i-1][0];
        }
        for(int i=1;i<=n;i++){
            res[1][i] =  res[1][i-1]+grid[0][i-1];
        }
        
        for(int i=2;i<=m;i++){
            for(int j=2;j<=n;j++){ 
                int base = res[i-1][j]>res[i][j-1]?res[i][j-1]:res[i-1][j]; //三元运算符顺序
                res[i][j] = grid[i-1][j-1]+base;
            }
        }
        return res[m][n];
    }
};