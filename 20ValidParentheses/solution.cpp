class Solution {
public:
    bool isValid(string s) {
        if(s=="") return true;
        stack<int> brace;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                brace.push(s[i]);
                continue;
            }
            if(brace.empty()) return false;
            if(s[i]==')'){
                if(brace.top()=='(') brace.pop();
                else return false;
            }else if(s[i]=='}'){
                if(brace.top()=='{') brace.pop();
                else return false;
            }else if(s[i]==']'){
                if(brace.top()=='[') brace.pop();
                else return false;
            }
        }
        if(brace.empty()) return true;
        else return false;
    }
};