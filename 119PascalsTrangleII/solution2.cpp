class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pre;
        vector<int> cur;
        cur.push_back(1);
        if(rowIndex<=0) return cur;
        while(rowIndex--){
            pre = cur;
            cur.clear();
            cur.push_back(1);
            for(int i=1;i<pre.size();i++){
                cur.push_back(pre[i-1]+pre[i]);
            }
            cur.push_back(1);
        }
        return cur;
    }
};