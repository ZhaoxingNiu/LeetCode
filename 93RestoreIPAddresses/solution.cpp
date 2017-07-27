class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        string ans;
        
        int n = s.length();
        for(int a =1;a<=3;a++){
            for(int b=1;b<=3;b++){
                for(int c=1;c<=3;c++){
                    int d = n-a-b-c;
                    if(d<=0 || d>3) continue;
                    int first = stoi(s.substr(0,a));
                    int second = stoi(s.substr(a,b));
                    int third = stoi(s.substr(a+b,c));
                    int four = stoi(s.substr(a+b+c,d));
                    if(first<=255 && second<=255 && third<=255 && four<=255)
                        if( (ans = to_string(first)+"."+to_string(second)+"."+to_string(third)+"."+to_string(four)).length() == s.length()+3)
                            res.push_back(ans);
                }
            }
        }
        return res;
    }
};