class Solution {
public:
    bool isPalindrome(int x) {
        /* 81
        if(x<0) return false;
        int origin_x = x;
        long reverse_x = 0;
        while(x){
            reverse_x = reverse_x*10 + x%10;
            x = x/10;
        }
        return reverse_x == origin_x;
        */
        // 19
        if(x<0 ||(x!=0 &&x%10 ==0)) return false;
        long reverse_x = 0;
        while(x>reverse_x){
            reverse_x = reverse_x*10 + x%10;
            x = x/10;
        }
        return reverse_x == x || reverse_x/10 == x ;
        
    }
};