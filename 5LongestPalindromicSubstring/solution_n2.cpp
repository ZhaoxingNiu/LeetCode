class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        if(s.size() ==1) return s;

        // manacher algotithm
        int maxlen = 0;
        int lindex = 0,rindex = 0;
        for(int i=0;i<s.length();i++){
            int len =0;
            int tLindex,tRindex;
            for(int j=0;i+j<s.length()&&i-j>=0;j++){// odd
                if(s[i-j]!=s[i+j]){
                    break;
                }
                len = 2*j+1;
                tLindex = i-j;
                tRindex = i+j;
            }
            if(len>maxlen){
                maxlen = len;
                lindex = tLindex;
                rindex = tRindex;
            }

            for(int j=0;i+j+1<s.length()&&i-j>=0;j++){// odd
                if(s[i-j]!=s[i+j+1]){
                    break;
                }
                len = 2*j+2;
                tLindex = i-j;
                tRindex = i+j+1;
            }
            if(len>maxlen){
                maxlen = len;
                lindex = tLindex;
                rindex = tRindex;
            }
        }
        return s.substr(lindex,rindex-lindex+1);

    }
};