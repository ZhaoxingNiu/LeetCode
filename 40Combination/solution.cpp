/*************************************************************************
	> File Name: solution.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月10日 星期一 09时13分10秒
 ************************************************************************/
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int >> res;
        sort(candidates.begin(),candidates.end());
        vector<int> local;
        findCombina(res,0,target,local,candidates);
        return res;
    }
private:
    void findCombina(vector<vector<int>>& res,const int order,const int target,vector<int>& local,const vector<int>& num){
        if(target ==0){
            res.push_back(local);
            return;
        }else{
            for(int i=order;i<num.size();i++){
                if(num[i]>target) return;
                if(i&&num[i]==num[i-1]&&i>order) continue;
                local.push_back(num[i]);
                findCombina(res,i+1,target-num[i],local,num);
                local.pop_back();
            }
            
        }
    }
    //  重点是理解   i&&num[i]==num[i-1]&&i>order  避免重复元素
    //  0 和 该位置 的元素可以 出现一次   i 等于0 的时候 短路    i>order 是为了i =order的时候  不管是否重复 都可以出现
};
