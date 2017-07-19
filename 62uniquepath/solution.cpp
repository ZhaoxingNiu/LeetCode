class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==1 || n==1)  return 1;
        m--;n--;
        if(m<n){
            int tmp = m;
            m = n;
            n = tmp;
        }
        //  c m+m-2  n-1;
        double  total = 1;
        int j =1;
        for(int i = m+1;i<=m+n;i++,j++){
            total *= i;
            total /= j;
        }
        return (int)total;
    }
};