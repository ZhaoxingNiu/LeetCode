/*************************************************************************
	> File Name: solution.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月10日 星期一 10时09分38秒
 ************************************************************************/
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int> >res;
        recursion(res,nums, 0);
        return res;
    }
private:
    void recursion(vector<vector<int> > &res,vector<int> nums, int index) {
        if (index == nums.size()-1) {
            res.push_back(nums);
            return;
        }
        for (int k = index; k < nums.size(); k++) {
            if (index != k && nums[index] == nums[k]) continue;
            swap(nums[index], nums[k]);
            recursion(res,nums,index+1);
        }
    }
};
