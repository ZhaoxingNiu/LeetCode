class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        int rows = matrix.size();
        int cols = matrix[0].size();
        if(rows*cols ==0) return false;
        int li = 0,hi = rows*cols - 1;
        while(li < hi){
            int mid = (li + hi)/2;
            if(target> matrix[mid/cols][mid%cols]){
                li = mid+1;
            }else{
                hi = mid;
            }
        }
        return matrix[li/cols][li%cols] ==target;
    }
};