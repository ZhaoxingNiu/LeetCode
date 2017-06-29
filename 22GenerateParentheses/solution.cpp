class Solution {
public:
    void parenthesis(vector<string> &res,string pre,int left,int right){
        if(left==0&&right==0) {
            res.push_back(pre);
            return;
        }
        if(left){
            parenthesis(res,pre+"(",left-1,right+1);
        }
        if(right){
            parenthesis(res,pre+")",left,right-1);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        if(n<=0) return res;
        else if(n==1){
            res.push_back("()");
            return res;
        }else if(n==2){
            res.push_back("(())");
            res.push_back("()()");
            return res;
        }
        parenthesis(res,"",n,0);
        return res;
    }
    
};