class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur;
        if(nums.empty()) {
            res.push_back(vector<int>()); 
            return res;
        }
        int n = nums.size();
        addElement(res,nums,cur,n,0);
        return res;
    }
private:
    void addElement(vector<vector<int>>& res,vector<int>& nums,vector<int> cur,int n,int k){
        if(k ==n-1){
            res.push_back(cur);
            cur.push_back(nums[k]);
            res.push_back(cur);
            return;  //特殊情况及时 退出
        }
        addElement(res,nums,cur,n,k+1);
        cur.push_back(nums[k]);
        addElement(res,nums,cur,n,k+1);
    }
};