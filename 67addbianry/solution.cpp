class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.length();
        int n = b.length();
        if(n>m){
            string tmp = a;
            a = b;
            b = tmp;
        }
        int step = 0;
        for(int i=a.length()-1,j=b.length()-1;i>=0;i--){
            if(j>=0){
                step += b[j--]-'0';
            }
            step+=a[i]-'0';
            a[i] = '0'+step %2;
            step /=2;
        }
        if(step){
            a = '1'+a;
        }
        return a;
    }
};