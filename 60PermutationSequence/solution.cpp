class Solution {
public:
    string getPermutation(int n, int k) {
        int count = 1;
        string s(n,'0');
        for(int i=1;i<=n;i++) {
            count *=i;
            s[i-1] = '0'+i; // 123456..
        }
        k--;
        for(int i=0;i<n;i++){
            count /=n-i;   //记录最高位应该往后移几位
            int j = i + k/count;
             k %= count;
            char c = s[j];
            for(;j>i;j--){  // 保证后面的还是有序数组
                s[j] = s[j-1];
            }
            s[i] = c;
        }
        return s;
    }
    
};