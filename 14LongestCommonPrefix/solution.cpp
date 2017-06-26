class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        if(strs.size()<1) return prefix;
        int minlen = strs[0].length();
        for(int i=1;i<strs.size();i++){
            if(strs[i].length()<minlen) minlen = strs[i].length();
        }
        
        for(int i=0;i<minlen;i++){
            char to_add = strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=to_add) return prefix;
            }
            prefix += to_add;
        }
        return prefix;
    }
};