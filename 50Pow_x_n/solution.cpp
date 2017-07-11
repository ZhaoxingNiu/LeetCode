class Solution {
public:
    double myPow(double x, int n) {
        double res = 1.0;
        bool flag = true;
        if(n==0) return res;
        if(n<0) flag = false;
        double rate = x;
        while(n){
            if(n%2)
                res = res*rate;
            n = n/2;
            rate = rate*rate;
        }
        return flag?res:1/res;
    }
};