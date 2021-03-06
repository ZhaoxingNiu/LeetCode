class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> res(m+1,vector<int>(n+1,0));
        res[0][1] = 1;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(!obstacleGrid[i-1][j-1]){
                    res[i][j] = res[i-1][j] + res[i][j-1];
                }
            }
        }
        return res[m][n];
        
    }
};