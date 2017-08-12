class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows<=0) return res;
        vector<int> cur;
        vector<int> next;
        cur.push_back(1);
        res.push_back(cur);
        for(int i=1;i<numRows;i++){
            next.push_back(1);
            cur = res[i-1];
            for(int i =1;i<cur.size();i++){
                next.push_back(cur[i-1]+cur[i]);
            }
            next.push_back(1);
            res.push_back(next);
            next.clear();
        }
        return res;
        
        
    }
};
