/*************************************************************************
	> File Name: solution.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月10日 星期一 09时28分34秒
 ************************************************************************/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int >> res;
        int index = 0;
        permutation(res,nums,index);
        return res;
    }
private:
    void permutation(vector<vector<int >>& res,vector<int>& nums,int index){
        if(index == nums.size()) res.push_back(nums);
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            permutation(res,nums,index+1);
            swap(nums[index],nums[i]);
        }
    }
};
