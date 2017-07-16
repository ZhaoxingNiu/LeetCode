class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int dir = 0;  //   0 1 2 3  表示 右下左上 四个方向
        int count = 1;
        int stepX = 0,stepY = 1;
        int posX = 0,posY = 0;
        vector<vector<int>> res(n,vector<int>(n,0));
        if(n==0) return res;
        while(count<=n*n){
            res[posX][posY] = count++;
            if(count>n*n) break;
            while(posX+stepX<0 || posX+stepX>=n || posY+stepY<0 || posY+stepY>=n || res[posX+stepX][posY+stepY]){
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