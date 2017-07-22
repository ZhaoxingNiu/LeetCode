class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>>  res;
        if(n <=0 || k<=0 )  return res;
        vector<int > cur;
        addElement(res,cur,n,k,0);
        return res;
        
    }
private:
    void addElement(vector<vector<int>> &res,vector<int> cur,int n,int k,int maxv){
        if(cur.size() ==k){
            res.push_back(cur);
            return ;
        }
        for(int i= maxv+1;i<=n+cur.size()-k+1;i++){
            cur.push_back(i);
            addElement(res,cur,n,k,i);
            cur.pop_back();
        }
        
    }
};