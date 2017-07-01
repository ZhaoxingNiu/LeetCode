class Solution {
public:
    int longestValidParentheses(string s) {
        //可以不需要保存二维的信息
        if(s.size()<=1) return 0;
        int curMax = 0;
        vector<int > longest(s.size(),0);
        for(int i=1;i<s.size();i++){
            if(s[i]==')' && i-longest[i-1]-1 >=0 && s[i-longest[i-1]-1] == '('){
                longest[i] = longest[i-1]+2+((i-longest[i-1]-2>=0? longest[i-longest[i-1]-2]:0));
                curMax = max(curMax,longest[i]);
            }
        }
        return curMax;
    }
};