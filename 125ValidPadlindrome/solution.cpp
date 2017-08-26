class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int start=0,end=n-1;
        while(start <end){
            if((s[start]>='a' && s[start]<='z')
               || (s[start]>='A' && s[start]<='Z')
               || (s[start]>='0' && s[start]<='9')){
                if(s[start]>='a' && s[start]<='z') s[start] -=32;
            }else{
                start++;
                continue;
            }
            if((s[end]>='a' && s[end]<='z')
               || (s[end]>='A' && s[end]<='Z')
               || (s[end]>='0' && s[end]<='9')){
                if(s[end]>='a' && s[end]<='z') s[end] -=32;
            }else{
                end--;
                continue;
            }
            if(s[start]!=s[end]){
                return false;
            }else{
                start++;
                end--;
            }
                
        }
        return true;
        
    }
};