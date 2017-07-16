class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m = matrix.size();
        if(m==0) return res;
        int n = matrix[0].size();
        int dir = 0;  //   0 1 2 3  表示 右下左上 四个方向
        int stepX = 0,stepY = 1;
        int posX = 0,posY = 0;
        vector<vector<int>> blank(m,vector<int>(n,0));
        while(res.size()<m*n){
            res.push_back(matrix[posX][posY]);
            blank[posX][posY] = 1;
            if(res.size() ==m*n) break;
            while(posX+stepX<0 || posX+stepX>=m || posY+stepY<0 || posY+stepY>=n || blank[posX+stepX][posY+stepY]){
                dir = (dir+1)%4;
                switch(dir){
                    case 0:stepX = 0;stepY = 1;break;
                    case 1:stepX = 1;stepY = 0;break;
                    case 2:stepX = 0;stepY = -1;break;
                    case 3:stepX = -1;stepY = 0;break;
                    default: break;
                }
            }
            posX += stepX;
            posY += stepY;
        }
        return res;
    }
};