/*************************************************************************
	> File Name: solution.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月10日 星期一 20时02分02秒
 ************************************************************************/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = row;
        int halfRow,halfCol;
        if(row%2){
            halfRow =row/2;
            halfCol = row/2-1;
        }else{
            halfRow =row/2-1;
            halfCol = row/2-1;
        }
        for(int i=0;i<=halfRow;i++){
            for(int j=0;j<=halfCol;j++){
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[col-1-j][i];
                matrix[col-1-j][i] = matrix[col-1-i][col-1-j];
                matrix[col-1-i][col-1-j] =  matrix[j][col-1-i];
                matrix[j][col-1-i] = tmp;
            }
        }
    }
};
