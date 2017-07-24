class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur;
        if(nums.empty()) {
            res.push_back(vector<int>()); 
            return res;
        }
        sort(nums.begin(),nums.end());
        int n = nums.size();
        addElement(res,nums,cur,n,0,false);
        return res;
    }
    
    
private:
    void addElement(vector<vector<int>>& res,vector<int>& nums,vector<int> cur,int n,int k,int flag){
        if(k ==n){
            res.push_back(cur);
            return;  //特殊情况及时 退出
        }
        addElement(res,nums,cur,n,k+1,false);
        if(k && nums[k]== nums[k-1] && !flag) return;
        cur.push_back(nums[k]);
        addElement(res,nums,cur,n,k+1,true);
    }
};