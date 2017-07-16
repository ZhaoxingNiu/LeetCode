class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==0) return 0;
        int len = 0;
        int tail = s.length()-1;
        while(tail>=0 && s[tail] == ' ') tail--;
        while(tail>=0 && s[tail] != ' '){
            len++;
            tail--;
        }
        return len;
    }