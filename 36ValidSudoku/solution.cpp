class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int use_row[9][9] = {0},use_col[9][9] = {0},use_center[9][9]={0};
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j] !='.'){
                    int num = board[i][j]-'0'-1,k = i/3*3+j/3;
                    if(use_row[i][num]||use_col[j][num]||use_center[k][num])
                        return false;
                    use_row[i][num] = use_col[j][num] = use_center[k][num] = 1;
                }
            }
        }
        return true;
    }
};